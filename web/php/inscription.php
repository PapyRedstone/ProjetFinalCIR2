<?php
require "database.php";

$database = new Database();

$user = strip_tags(substr($_POST['pseudo'],0,32));
$mdp1 = strip_tags(substr($_POST['mdp'],0,32));
$mdp2 = strip_tags(substr($_POST['mdp2'],0,32));

if(strcmp($mdp1,$mdp2)){
    header('Location: error.php/badpasswordcomparaison');
    exit();
}

$sqlQuery = "SELECT * FROM user WHERE user='".$user."'";

$result = $database->execute($sqlQuery); 
if(isset($result)){
    header('Location: error.php/usernamealreadyuse');
    exit();
}

$cleanpw = crypt(md5($mdp1),md5($user));

$sqlQuery = "INSERT INTO user VALUES(NULL, :user, :pass, true)";

$database->execute($sqlQuery, array("user"=>$user, "pass"=>$cleanpw));

header('Location: menu.php');

session_start();

$_SESSION["pseudo"]=$user;

?>
