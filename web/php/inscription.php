/<?php
require "database.php";

$database = new Database();

$pseudo = strip_tags($_POST['pseudo']);
$mdp1 = strip_tags($_POST['mdp']);
$mdp2 = strip_tags($_POST['mdp2']);

if(strcmp($mdp1,$mdp2)){
    header('Location: error.php/badpasswordcomparaison');
    exit();
}

$sqlQuery = "SELECT * FROM user WHERE name='".$pseudo."'";

$result = $database->execute($sqlQuery);

if(isset($result[0])){
    header('Location: error.php/usernamealreadyuse');
    exit();
}

$cleanpw = crypt(md5($mdp1),md5($pseudo));

$sqlQuery = "INSERT INTO user VALUES(NULL, :user, :pass, true)";

$database->execute($sqlQuery, array("user"=>$pseudo, "pass"=>$cleanpw));

header('Location: menu.php');

session_start();

$_SESSION["pseudo"]=$pseudo;

?>
