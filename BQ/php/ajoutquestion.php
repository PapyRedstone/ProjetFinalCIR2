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
<center><h1>Ajouter une question</h1></center>
  <div id="container">
  <div class="col-md-4" id="rectangle">
    <label>Theme:</label>
    </br>
    <div class="list-group">
<button type="button" class="list-group-item">ISEN</button>
<button type="button" class="list-group-item">People</button>
<button type="button" class="list-group-item">Animaux</button>
</div>
</br>
<form method="post" >
<label>Nouveau theme:</label>
<input type="text" name = "ntheme" >

<button class ="submit rouge" type="submit" value="nouveautheme">Ajout</button>
</form>


      </div>
<div class="col-md-1">
  </div>
  <div class="col-md-4" id="rectangle">
    <label>Question:</label>
    </br>
    <div class="list-group">
<button type="button" class="list-group-item">ISEN</button>
<button type="button" class="list-group-item">People</button>
<button type="button" class="list-group-item">Animaux</button>
</div>
</br>
<form method="post" >
<label>Nouvelle Question:</label>
<input type="text" name = "nquestion" >

<button class ="submit jaune" type="submit" value="nouvellequestion">Ajout</button>
</form>


      </div>
  <div class="col-md-1">
    </div>
  <div class="col-md-4" id="rectangle">
    <label>Proposition:</label>
    </br>
    <div class="list-group">
<button type="button" class="list-group-item">ISEN</button>
<button type="button" class="list-group-item">People</button>
<button type="button" class="list-group-item">Animaux</button>
</div>
</br>
<form method="post" >
<label>Nouvelle Proposition:</label>
<input type="text" name = "nproposition" >

<button class ="submit rouge" type="submit" value="nouvelleproposition">Ajout</button>
</form>
  </div>

</div>
</body>
</html>
