<?php
session_start();

require "database.php";

$database = new Database();

$questions = array();

if(isset($_GET["seed"])){
    $seed = $_GET["seed"];

    $querry = "SELECT bonne_reponse, proposition, choix1, choix2 FROM Question as q, Proposition as p,contient as c WHERE c.seed = '$seed' AND p.id_proposition = c.id_proposition AND p.id_question = q.id_question";

    $questions = $database->execute($querry);

    $questions[] = $seed;
}else{
    $theme = $_GET["theme"];

    $querry = "SELECT id_proposition, bonne_reponse, proposition, choix1, choix2 FROM Question as q, Proposition as p, Theme as t WHERE t.id_theme = '$theme' AND q.id_theme = t.id_theme AND p.id_question = q.id_question";

    $seed = rand(0,100000);

    srand($seed);

    $q = $database->execute($querry);

    $keys = array_rand($q, 3);

    $database->execute("INSERT INTO Jeu Values ($seed,0)");

    $querry = "INSERT INTO contient VALUES (:id,:seed)";

    foreach($keys as $k){
        $questions[] = $q[$k];

        $database->execute($querry, array("id"=>$q[$k]["id_proposition"], "seed"=>$seed));
    }

    $questions[] = $seed;
}
$questions = json_encode($questions)
?>

<!doctype>
<html lang="fr">
    <head>
	<meta charset="utf-8">
	<title>Burger Quizz</title>
	<!-- Css Styles -->
	<link href="../css/bootstrap.min.css" rel="stylesheet" type="text/css" />
	<link href="../css/bootstrap-theme.min.css" rel="stylesheet" type="text/css" />
	<link href="../css/style.css" rel="stylesheet" type="text/css" >
	<link rel="shortcut icon" href="../image/fav.ico" type="image/x-icon">
  <link rel="icon" href="../image/fav.ico" type="image/x-icon">
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
	<script src="../js/game.js"></script>
    </head>
    <body>
	<?php
	include "../php/header.php";
	?>

	<div id="js" style="display: none;">
	<?php
	echo htmlspecialchars($questions);
	?>
	</div>

	<br>
	<br>
	<center><h2 id="question"></h2></center>

	<br>
	<br>
<center><h1 id="proposition"></h1></center>


	<div id="container" >

	    <div class="col-md-2">
	    </div>
	    <div class="col-md-2">

		<div >
		    <button class ="lien bleu" id="reponse1" type="reponse" onclick="clickOnButton(1)" ></button>
		</div>

	    </div>
	    <div class="col-md-1">
	    </div>
	    <div class="col-md-2">

		<div >
		    <button class ="lien bleu" id="reponse2" type="reponse" onclick="clickOnButton(2)"></button>
		</div>

	    </div>
	    <div class="col-md-1">
	    </div>
	    <div class="col-md-2">

		<div >
		    <button class ="lien bleu" id="reponse3" type="reponse" onclick="clickOnButton(3)">Les Deux</button>
		</div>

	    </div>
	    <div class="col-md-2 ">
	    </div>

	</div>
	<div id="progress">
	    <progress value="100" min="0" max="100"><span></span></progress>
	</div>
        <h1><center><div id="compteur"></div></center></h1>
    </body>
</html>
