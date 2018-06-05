<?php
require "database.php";
$database = new Database();
header('Content-Type: text/plain; charset=utf-8');
header('Cache-control: no-store, no-cache, must-revalidate');
header('Pragma: no-cache');
$url = explode("/", $_SERVER["REQUEST_URI"]);
switch($_SERVER['REQUEST_METHOD']){
case "GET":
    $ressource = $_GET["ressource"];

    switch($ressource){
    case "theme":
        echo json_encode($database->execute("SELECT id_theme, theme FROM Theme WHERE est_active=1"));
        break;
    case "question":
        if(isset($_GET["id_theme"])){
            $id = $_GET["id_theme"];
            echo json_encode($database->execute("SELECT id_question, choix1, choix2 FROM Question WHERE est_active=1 AND id_theme = $id"));
        }else{
            $id = $_GET["id_question"];
            echo json_encode($database->execute("SELECT choix1, choix2 FROM Question WHERE est_active=1 AND id_question = $id"));
        }
        break;
    case "proposition":
        $id = $_GET["id_question"];
        echo json_encode($database->execute("SELECT id_proposition,proposition  FROM Proposition WHERE est_active=1 AND id_question = $id"));
        break;
    }
    break;
case "POST":
    switch(end($url)){
    case "proposition":
        $prop = $_POST["prop"];
        $rep = intval($_POST["rep"]);
        $id = intval($_POST["idq"]);

        $querry = "INSERT INTO Proposition VALUES (NULL, :prop, :rep, 1, :id)";

        $database->execute($querry,array("prop"=>$prop, "rep"=>$rep, "id"=>$id));
        break;
    case "question":
        $choix1 = $_POST["choix1"];
        $choix2 = $_POST["choix2"];
        $id = $_POST["idt"];
        $querry = "INSERT INTO Question VALUES (NULL, :c1, :c2, 1, :id)";
        $database->execute($querry, array("c1"=>$choix1, "c2"=>$choix2, "id"=>$id));
        break;
    case "theme":
        $theme = $_POST["theme"];
        $querry = "INSERT INTO Theme VALUES (NULL, :t, 1)";
        $database->execute($querry, array("t"=>$theme));
        break;
    }
    break;
}
header('HTTP/1.1 200 OK');
exit();
?>
