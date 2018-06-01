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

<center><h1>Elle m'a sucé ?</h1></center>
</br>
</br>
    <center><h3>Ta mère, ta soeur , ou les deux :</h3></center>


</div>

  <div id="container" >

    <div class="col-md-2">
    </div>
    <div class="col-md-2">

      <div >
        <a href="../php/jeu.php" ><button class ="lien bleu" type="reponse0" value="JOUER" id="reponse">TA MERE</button></a>
      </div>

    </div>
    <div class="col-md-1">
    </div>
    <div class="col-md-2">

      <div >
        <a href="../php/jeu.php" ><button class ="lien bleu" type="reponse0" value="JOUER" id="reponse">TA SOEUR</button></a>
      </div>

    </div>
    <div class="col-md-1">
    </div>
    <div class="col-md-2">

      <div >
        <a href="../php/jeu.php" ><button class ="lien bleu" type="reponse1" value="JOUER" id="reponse">LES DEUX</button></a>
      </div>

    </div>
    <div class="col-md-2 ">
    </div>

  </div>

  <div class="progress" id="timeur0">
<div class="progress-bar progress-bar-info progress-bar-striped active" role="progressbar" aria-valuenow="33" aria-valuemin="0" aria-valuemax="100" id="timeur1">
<span class="sr-only">33% effectué </span>

</div>
</div>
<center><h2>10.0s</h2></center>

</body>
</html>
