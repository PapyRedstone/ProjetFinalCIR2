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
    </head>
    <body>
	<?php
	include "../php/header.php";	
	?>
	
	
	
	<div id="container">
	    <div class="col-md-4">
		<p>Burger Quiz est un jeu télévisé inventé par Alain Chabat et Kader Aoun, diffusé sur Canal+ en quotidien du 27 août 2001 au 5 juillet 2002 à 20 h 5 en clair, puis, depuis le 25 avril 2018, sur TMC en hebdomadaire en première partie de soirée. Le jeu est produit par la société de production Chez Wam, puis par la société R&G Production et réalisée par Jérôme Revon. L'émission a principalement été présentée par Alain Chabat.
		    
		    Le concept de l'émission consiste à répondre à des questions plus ou moins loufoques afin d'atteindre les 25 points, appelés miams, avant l'équipe adverse. Les deux équipes, nommées Ketchup et Mayo, sont chacune composées de deux personnalités connues et d'un candidat anonyme. L'équipe vainqueur voit le candidat anonyme répondre à l'épreuve du « Burger de la mort », où le présentateur pose dix questions les unes après les autres et le candidat doit y répondre correctement dans l'ordre initialement posé.</p>
	    </div>
	    <div class="col-md-1">
	    </div>
	    <div class="col-md-3" >
		<h3>Connexion</h3>
		<form method="post" action="login.php">
		    <label>Nom d'utilisateur:</label>
		    <input type="text" name = "pseudo" required>
		    <label>Mot de passe:</label>
		    <input type="password" name = "password" required>
		    
		    <button class ="submit rouge" type="submit" value="Connexion">Connexion</button>
		</form>
	    </div>
	    <div class="col-md-1">
	    </div>
	    <div class="col-md-3">
		<h3>Inscription</h3>
		<form method="POST" action="inscription.php">
		    
		    <label>Nom d'utilisateur:</label>
		    <input type="text" name='pseudo' required>
		    
		    <label>Mot de passe:</label>
		    <input type="password" name='mdp' required>
		    
		    <label>Vérification du mot de passe:</label>
		    <input type="password" name='mdp2' required>
		    
		    <br>
		    
		    <button class ="submit jaune" type="submit" value="Soumettre" >Soumettre</button>
		</form>
	    </div>
	    
	</div>
	
    </body>
</html>
