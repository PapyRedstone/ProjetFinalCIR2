<?php

require "database.php";

$database = new Database();

$ressources = explode('/',$_SERVER['REQUEST_URI']);

$sqlQuery = "DELETE FROM Palmares WHERE id_palmares='".end($ressources)."'";

$database->execute($sqlQuery);

var_dump(end($ressources));

header('Location: ../monprofil.php');
exit();
?>
