<?php
session_start();
?>

<html lang="fr">
    <head>
	<meta charset="utf-8">
	<meta name="author" content="???" />
	<meta name="viewport" content="width=device-width, initial-scale=1" />
	<title>Burger Quizz</title>
	<!-- Css Styles -->
	<link href="../css/bootstrap.min.css" rel="stylesheet" type="text/css" />
	<link href="../css/bootstrap-theme.min.css" rel="stylesheet" type="text/css" />
	<link href="../css/style.css" rel="stylesheet" type="text/css" >
	<!--<link rel="icon" type="image/png" sizes="16x16" href="FAV/favicon-16x16.png">-->
	<!--<link rel="manifest" href="FAV/manifest.json">-->
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
	<script src="../js/ajax.js"></script>
	<script src="../js/ajoutQuestion.js"></script>
    </head>
    <body>
	<?php
	include "../php/header.php";
	
	?>
	
        <br>
	<center><h1>Ajouter une question</h1></center>
	<p>Vos propositions seront étudiés par un administrateur puis ajouter au jeu</p>
	<div id="container">
	    <div class="col-md-4" id="rectangle">
		<label>Theme:</label>
 	        <br>
		<div class="list-group" id="theme">

		</div>
	        <br>
		<label>Nouveau theme:</label>
		<input type="text" id="ntheme" >
		
		<button class ="submit rouge" type="submit" id="adddTheme" onclick="addTheme();">Ajout</button>
	    </div>
	    <div class="col-md-1">
	    </div>
	    <div class="col-md-4" id="rectangle">
		<label>Question:</label>
		<br>
		<div class="list-group" id="question">

		</div>
		<br>
		<label>Nouvelle Question:</label>
		<br>
		<label>Choix 1</label>
		<input type="text" id="choix1">

		<label>Choix 2</label>
		<input type="text" id="choix2">
		
		<button class ="submit jaune" type="submit" id="addQues">Ajout</button>
	    </div>
	    <div class="col-md-1">
	    </div>
	    <div class="col-md-4" id="rectangle">
		<label>Proposition:</label>
	        <br>
		<div class="list-group" id="proposition">

		</div>
	        <br>

		<label>Nouvelle Proposition:</label>
		<input type="text" id="nproposition" >
		
		<center><label id="radio1"></label></center>
		<input type="radio" name="bonneRep" value="1">
		
		<center><label id="radio2"></label></center>
		<input type="radio" name="bonneRep" value="2">
		
		<center><label>Les deux</label></center>
		<input type="radio" name="bonneRep" value="3">
		
		<button class ="submit rouge" type="submit" id="addProp">Ajout</button>
	    </div>
	</div>
    </body>
</html>
