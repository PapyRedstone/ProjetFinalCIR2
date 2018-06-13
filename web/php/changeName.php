<?php

require "database.php";

session_start();

$database = new Database();

$pseudo1 = strip_tags($_POST["newPseudo"]);
$pseudo2 = strip_tags($_POST["confNewPseudo"]);

if(strcmp($pseudo1,$pseudo2)){
    header('Location: error.php/badUSernameComparaison');
    exit();
}

$sqlQuery = "UPDATE user SET name = :newPseudo WHERE name = :pseudo";

$database->execute($sqlQuery, array("newPseudo"=>$pseudo1, "pseudo"=>$_SESSION["pseudo"]));

$_SESSION["pseudo"] = $pseudo1;

header('Location: monprofil.php');

?>
