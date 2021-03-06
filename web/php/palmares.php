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
  <link rel="shortcut icon" href="../image/fav.ico" type="image/x-icon">
  <link rel="icon" href="../image/fav.ico" type="image/x-icon">
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
	<script src="../js/bootstrap.min.js"></script>
    </head>
    <body>
	<?php
	include "../php/header.php";

	?>

        </br>
	</br>
	<center><h1><span class="glyphicon glyphicon-star" aria-hidden="true" id="star"></span> Palmares <span class="glyphicon glyphicon-star" aria-hidden="true" id="star"></span></h1></center>

	<div class="row" id="menupoduim">
	    <div class="col-lg-6">
		<div class="input-group">
		    <div class="input-group-btn">
			<button type="button" class="btn btn-default dropdown-toggle" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">Seed <span class="caret"></span></button>
			<ul class="dropdown-menu">
			    <li><a href="../php/palmares.php">Global</a></li>
			    <li role="separator" class="divider"></li>
			    <?php
			    require "database.php";

			    $database = new Database();

			    $seeds = $database->execute("SELECT seed FROM Jeu ORDER BY seed DESC");

			    foreach($seeds as $s){
				echo '<li><a href="../php/palmares.php?seed='.$s["seed"].'">'.$s["seed"].'</a></li>';
			    }
			    ?>
			</ul>
		    </div><!-- /btn-group -->
		    <input type="text" class="form-control" aria-label="...">
		</div><!-- /input-group -->
	    </div><!-- /.col-lg-6 -->
	</div>

	<div id="container">
	    <div class="col-md-3">
	    </div>
	    <div class="col-md-6">
		<?php
		if(isset($_GET["seed"])){
      $seed = $_GET["seed"];
		    $scores = $database->execute("SELECT score, name FROM Palmares AS p, user AS u WHERE seed = '$seed' AND p.id_user=u.id_user ORDER BY score DESC");
		}else{
		    $scores = $database->execute("SELECT score, name FROM Palmares AS p, user AS u WHERE p.id_user=u.id_user ORDER BY score DESC");
		}
		?>

		<div id="poduim0">
		    <div id="score1"><center><h2>1er : <?php echo $scores[0]["name"]?> </center></h2></div>
		    <div id="score2"><center><h3>2eme: <?php echo $scores[1]["name"]?> </center></h3></div>
		    <div id="score3"><center><h4>3eme: <?php echo $scores[2]["name"]?> </center></h4></div>
		</div>

		<div class="panel panel-default">
		    <table class="table">
			<tr>
			    <th>Place</th>
			    <th>Nom d'utilisateur</th>
			    <th>score</th>
			</tr>

			<?php
			for($i=4;$i<count($scores); $i++){
			    echo "<tr><td>$i</td><td>".$scores[$i]["name"]."</td><td>".$scores[$i]["score"]."</td></tr>";
			}
			?>
		    </table>
		</div>
            </div>
	</div>
    </body>
</html>
