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

        </br>
	<center><h1>Mon Profil</h1></center>
	<div id="container">
	    <div class="col-md-3" id="rectangle">
		<center><h4>Changer de nom d'utilisateur</h4></center>
		<form method="post" action="changeName.php">
		    <label>Nouveau nom d'utilisateur:</label>
		    <input type="text" name = "newPseudo" required>
		    <label>Confirmation:</label>
		    <input type="text" name = "confNewPseudo" required>

		    <button class ="submit rouge" type="submit">Valider</button>
		</form>
	    </div>
	    <div class="col-md-1">
	    </div>
	    <div class="col-md-3" id="rectangle">
		<center><h4>Changer de mot de passe</h4></center>
		<form method="post" action="changePass.php">
		    <label>Nouveau mot de passe:</label>
		    <input type="password" name = "newpass" required>
		    <label>Confirmation:</label>
		    <input type="password" name = "confnewpass" required>

		    <button class ="submit jaune" type="submit" value="Changer mot de passe">Valider</button>
		</form>
	    </div>
	    <div class="col-md-1">
	    </div>
	    <div class="col-md-4" id="tableau">
		<div class="panel panel-default">
		    <div class="panel-heading"><center>Mes Scores</center></div>
		    <table class="table">
			<tr>
			    <th>Place</th>
			    <th>Score</th>
			    <th>Seed</th>
			    <th>Supprimer</th>
			</tr>
			<?php
			require "functions.php";
			$database = new Database();

			$sqlQuery = "SELECT p.* FROM Palmares AS p, user AS u WHERE u.id_user = p.id_user and u.name = '".$_SESSION["pseudo"]."'";

			$scores = $database->execute($sqlQuery);

			foreach($scores as $score){
			    echo "<tr><td></br>".getPlace($score["id_palmares"], $score["seed"])."</td>";
			    echo "<td></br>".$score["score"]."</td>";
			    echo "<td></br>".$score["seed"]."</td>";
			    echo '<td><button class ="submit" type="submit" value="supprime" id="supprimer" onclick="location.href=\'deleteScore.php/'.$score["id_palmares"].'\'">x</button></td></tr>';
			}
			?>
		    </table>
		</div>
	    </div>

	</div>
    </body>
</html>
