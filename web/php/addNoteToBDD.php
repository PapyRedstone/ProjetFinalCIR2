<?php
session_start();

require "database.php";

$database = new Database();

$seed = $_GET["seed"];
$note = $_GET["note"];

$querry = "SELECT id_proposition FROM contient WHERE seed=$seed";

$id_prop = $database->execute($querry);

$querry = "INSERT INTO A_pour_notes VALUES ";

foreach($id_prop as $id){
$querry .= "(".$id["id_proposition"].", $note),";
}

$querry = substr($querry, 0, -1).";";

$database->execute($querry);

header("Location: ../php/menu.php");

exit();

?>
