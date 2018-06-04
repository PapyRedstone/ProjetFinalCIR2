<?php
session_start();
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
	<!--<link rel="icon" type="image/png" sizes="16x16" href="FAV/favicon-16x16.png">-->
	<!--<link rel="manifest" href="FAV/manifest.json">-->
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
	<script src="../js/game.js"></script>
    </head>
    <body>
	<?php
	include "../php/header.php";
	
	?>
	
	<br>
	<br>
	
	<center><h1>Elle m'a sucé ?</h1></center>
	<br>
	<br>
	<center><h3>Ta mère, ta soeur , ou les deux :</h3></center>
	
	
	<div id="container" >
	    
	    <div class="col-md-2">
	    </div>
	    <div class="col-md-2">
		
		<div >
		    <a href="../php/jeu.php" ><button class ="lien bleu" type="reponse0" value="JOUER" id="reponse">TA MERE</button></a>
		</div>
		
	    </div>
	    <div class="col-md-1">
	    </div>
	    <div class="col-md-2">
		
		<div >
		    <a href="../php/jeu.php" ><button class ="lien bleu" type="reponse0" value="JOUER" id="reponse">TA SOEUR</button></a>
		</div>
		
	    </div>
	    <div class="col-md-1">
	    </div>
	    <div class="col-md-2">
		
		<div >
		    <a href="../php/jeu.php" ><button class ="lien bleu" type="reponse1" value="JOUER" id="reponse">LES DEUX</button></a>
		</div>
		
	    </div>
	    <div class="col-md-2 ">
	    </div>
	    
	</div>
	<div id="progress">
	    <progress value="100" min="0" max="100"><span></span></progress>
	</div>
	
	
	
	<script language="JavaScript">
	 
        </script>
	
        <h1><center><div id="compteur"></div></center></h1>
    </body>
</html>
