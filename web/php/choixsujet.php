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
  <link rel="shortcut icon" href="../image/fav.ico" type="image/x-icon">
  <link rel="icon" href="../image/fav.ico" type="image/x-icon">
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>

    </head>
    <body>
	<?php
	include "../php/header.php";
	?>

	<br>
	<center><h1>Choix du Sujet</h1></center>
	<div id="container">
	    <div class="col-md-2">
	    </div>
	    <div class="col-md-3" id="rectangle">
		<center><h4>Nouvelle Partie</h4></center>
		<label>Choix du Sujet:</label>
		<br>
		<div class="list-group">
		    <?php
		    require "database.php";

		    $database = new Database();

		    $themes = $database->execute("SELECT id_theme, theme FROM Theme");

		    //var_dump($themes);

		    foreach($themes as $e=>$t){
			echo "<button type='button' class='list-group-item' onclick='location.href=\"../php/jeu.php?theme=".$t["id_theme"]."\"'>".$t["theme"]."</button>";
		    }
		    ?>
		</div>

	    </div>
	    <div class="col-md-2">
	    </div>
	    <div class="col-md-3" id="rectangle">
		<center><h4>Rejouer une Partie</h4></center>
		<label>Seed:</label>
		<br>
		<br>
		<input type="text" id="seed" >
		<label>Seed les plus jouer:</label>
		<div class="list-group">

		    <?php
		    $seeds = $database->execute("SELECT seed FROM Jeu ORDER BY nb_fois_jouer DESC");

		    for($i=0; $i< min(10, count($seeds)); $i++){
			echo '<button type="button" class="list-group-item" onclick="location.href=\'../php/jeu.php?seed='.$seeds[$i]["seed"].'\'">'.$seeds[$i]["seed"].'</button>';
		    }
		    ?>
		</div>
		<button class ="submit jaune" type="submit" value="rejouer partie" onclick='location.href="../php/jeu.php?seed="+document.getElementById("seed").value'>Demarrer le jeu</button>
	    </div>
	    <div class="col-md-2">
	    </div>
	</div>
    </body>
</html>
