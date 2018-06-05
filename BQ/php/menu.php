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
</head>
<body>
  <?php
  include "../php/header.php";

  ?>



  <div id="container">
    <div class="col-md-3">
    </div>
    <div class="col-md-6">

      <div >
        <a href="../php/choixsujet.php" ><button class ="lien bleu" type="lien" value="JOUER" id="jouer">JOUER</button></a>
      </div>
      <div >
        <a href="../php/palmares.php" ><button class ="lien rouge" type="lien" value="Palmares" id="palmares">Palmares</button></a>

        <a href="../php/ajoutquestion.php" ><button class ="lien jaune" type="lien" value="Ajouter une question" id="ajoutQuestion">Ajouter une question</button></a>
      </div>
    </div>
    <div class="col-md-3 ">
    </div>

  </div>

</body>
</html>
