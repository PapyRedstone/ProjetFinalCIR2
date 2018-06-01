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
	
        </br>
	</br>
	<center><h1>*Palmares*</h1></center>
	
	
	
	<div id="container">
	    <div class="col-md-3">
	    </div>
	    <div class="col-md-6">
		<?php
		require "database.php";

		$database = new Database();
    
		$scores = $database->execute("SELECT score, name FROM Palmares AS p, user AS u WHERE seed = '123' AND p.id_user=u.id_user ORDER BY score DESC");
		?>
		
		<div id="poduim0">
      		    <div id="poduim"><center><img src="../image/podium.png" ></center></div>
		    <div id="score1"><h4><?php echo $scores[0]["name"]?></h4></div>
		    <div id="score2"><h5><?php echo $scores[1]["name"]?></h5></div>
		    <div id="score3"><h6><?php echo $scores[2]["name"]?></h6></div>
		</div>
		
		<div class="panel panel-default">
		    <table class="table">
			<tr>
			    <th>Place</th>
			    <th>Nom d'utilisateur</th>
			    <th>score</th>
			</tr>
			
			<?php
			for($i=3;$i<count($scores); $i++){
			    echo "<tr><td>$i</td><td>".$scores[$i]["name"]."</td><td>".$scores[$i]["score"]."</td></tr>";
			}
			?>
		    </table>
		</div>
            </div>
	</div>
    </body>
</html>
