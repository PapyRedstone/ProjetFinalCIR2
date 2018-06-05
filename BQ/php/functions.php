<?php
require "database.php";

function getPlace($id_palmares, $seed){    
    $database = new Database();
    
    $scores = $database->execute("SELECT id_palmares, score FROM Palmares WHERE seed = '".$seed."' ORDER BY score DESC");

    $i=0;
    
    foreach($scores as $k=>$score){
        $i++;
        if($score["id_palmares"] == $id_palmares){
            return $i;
        }
    }

    return 0;
}
?>
