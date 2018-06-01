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
    <div class="col-md-3">
    </div>
    <div class="col-md-6">

      <div >
        <button class ="lien bleu" type="lien" value="JOUER" id="jouer">JOUER</button>
      </div>
      <div >
        <button class ="lien rouge" type="lien" value="Palmares" id="palmares">Palmares</button>

        <button class ="lien jaune" type="lien" value="Ajouter une question" id="ajoutQuestion">Ajouter une question</button>
      </div>
    </div>
    <div class="col-md-3 ">
    </div>

  </div>

</body>
</html>
