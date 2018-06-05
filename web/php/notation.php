<?php
session_start();

require "database.php";

$database = new Database();

$seed = $_GET["seed"];
$score = $_GET["score"];

$querry="UPDATE Jeu SET nb_fois_jouer=nb_fois_jouer+1 WHERE seed=:seed";
$database->execute($querry, array("seed"=>$seed));

$querry="INSERT INTO Palmares VALUES (NULL, :score, (SELECT id_user FROM user WHERE name=:name), :seed)";
$database->execute($querry, array("score"=>$score, "name"=>$_SESSION["pseudo"], "seed"=>$seed));
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
	<script>
	 var etoiles = 0;
	 function endPage(){
	     location.href="../php/addNoteToBDD.php?note="+etoiles+"&seed="+<?php echo $seed;?>;
	 }
	</script>
    </head>
    <body>
	<?php
	include "../php/header.php";
	
	?>
	
	<br>
	<br>
	
	
	
	<center><h1>Comment avez vous trouvez le Quiz</h1></center>
	<div id="container">
	    <div class="col-md-2">
	    </div>
	    <div class="col-md-8">
		<div class="rating">
		    <?php
		    for($i=10; $i!=0; $i--){
			echo "<a href=\"#$i\" title=\"Donner $i étoiles\" onclick=\"etoiles=$i\">★</a>";
		    }
		    ?>
		</div>
		
		<button class ="lien bleu" type="lien" value="JOUER" id="retourmenu" onclick="endPage()">Retour au menu</button>
            </div>
	    <div class="col-md-2 ">
	    </div>
	    
	</div>
	
    </body>
</html>
