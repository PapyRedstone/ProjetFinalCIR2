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
</head>
<body>
<?php
include "../php/header.php";

?>

</br>
<center><h1>Choix du Sujet</h1></center>
  <div id="container">
    <div class="col-md-2">
      </div>
  <div class="col-md-3" id="rectangle">
    <center><h4>Nouvelle Partie</h4></center>
      <label>Choix du Sujet:</label>
      </br>
      <div class="list-group">
  <a href="../php/jeu.php" ><button type="button" class="list-group-item ">Tout les Sujet</button></a>
  <a href="../php/jeu.php" ><button type="button" class="list-group-item">ISEN</button></a>
  <a href="../php/jeu.php" ><button type="button" class="list-group-item">People</button></a>
  <a href="../php/jeu.php" ><button type="button" class="list-group-item">Animaux</button></a>
</div>

      </div>
<div class="col-md-2">
  </div>
  <div class="col-md-3" id="rectangle">
    <center><h4>Rejouer une Partie</h4></center>
    <form method="post" >
    <label>Seed:</label>
    </br>
    </br>
    <input type="text" name = "seed" >
        <label>Seed les plus joeur:</label>
        <div class="list-group">
    <a href="../php/jeu.php" ><button type="button" class="list-group-item ">48566484/986</button></a>
    <a href="../php/jeu.php" ><button type="button" class="list-group-item">455468558</button></a>
    <a href="../php/jeu.php" ><button type="button" class="list-group-item">4856484</button></a>
    <a href="../php/jeu.php" ><button type="button" class="list-group-item">156114846546856</button></a>
  </div>
    <a href="../php/jeu.php" ><button class ="submit jaune" type="submit" value="rejouer partie" >Demarrer le jeu</button></a>
  </form>
      </div>
  <div class="col-md-2">
    </div>

</div>
</body>
</html>
