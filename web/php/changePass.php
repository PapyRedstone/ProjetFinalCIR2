<?php

require "database.php";

session_start();

$database = new Database();

$pass1 = strip_tags($_POST['newpass']);
$pass2 = strip_tags($_POST['confnewpass']);

if(strcmp($pass1,$pass2)){
    header('Location: error.php/badUSernameComparaison');
    exit();
}

$cleanpw = crypt(md5($pass1),md5($_SESSION["pseudo"]));

$sqlQuery = "UPDATE user SET password_hash = :newPass WHERE name = :pseudo";

$database->execute($sqlQuery, array("newPass"=>$cleanpw, "pseudo"=>$_SESSION["pseudo"]));

header('Location: monprofil.php');

?>
