<!doctype html>
<html>
    <head>
	<meta charset="UTF-8">
	<title>Burger Quizz</title>
	<!-- Css Styles -->
	<link href="../css/bootstrap.min.css" rel="stylesheet" type="text/css" />
	<link href="../css/bootstrap-theme.min.css" rel="stylesheet" type="text/css" />
	<link href="../css/style.css" rel="stylesheet" type="text/css" >
	<link href="../css/header.css" rel="stylesheet" type="text/css" >
	<!--<link rel="icon" type="image/png" sizes="16x16" href="FAV/favicon-16x16.png">-->

	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
	<link  href = "../css/header.css" rel="stylesheet" type="texte/css" >

    </head>



    <body>
	<div id="back" class="container">

	    <div id="imageMenu" class='element'>
		<a href="../php/menu.php"><img src="../image/burger-quiz.png" id="image"></a>
	    </div>
      <div id="back1">
	    <?php
	    if(isset($_SESSION["pseudo"])){
		echo "<div id='boutonMenu'class='element'><button class ='lien jaune' type='lien' value='".$_SESSION["pseudo"]."'onclick='location.href=\"../php/monprofil.php\";'>".$_SESSION["pseudo"]."</button></div><div id='boutonMenu'><button class ='lien rouge' type='lien' value='Deconnexion' onclick='location.href=\"../php/logout.php\";'>Deconnexion</button></div>";
	    }
	    else{
		echo "<div id='boutonMenu'class='element'><button class ='lien jaune hidden' type='lien' value='Mon Profil'>Mon Profil</button></div><div id='boutonMenu'><button class ='lien rouge hidden' type='lien' value='Deconnexion'>Deconnexion</button></div>";
	    }
	    ?>
	</div>
</div>
    </body>
</html>
