<?php
require "database.php";

$databasse = new Database();

$user = strip_tags(substr($_POST['pseudo'],0,32));
$mdp1 = strip_tags(substr($_POST['mdp'],0,32));
$mdp2 = strip_tags(substr($_POST['mdp2'],0,32));

if(strcmp($mdp1,$mdp2)){
    header('Location: error.php/badpasswordcomparaison');
}

$cleanpw = crypt(md5($mdp1),md5($user));

$sqlQuery = "INSERT INTO user VALUES(NULL, :user, :pass, true)";

$database->execute($sqlQuery, array("user"=>$user, "pass"=>$cleanpw));

header('Location: menu.php');

session_start();

$_SESSION["pseudo"]=$user;

?>
