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
<center><h1>Mon Profil</h1></center>
  <div id="container">
  <div class="col-md-3" id="rectangle">
    <center><h4>Changer de nom d'utilisateur</h4></center>
    <form method="post" >
    <label>Nouveau nom d'utilisateur:</label>
    <input type="text" name = "nom utilisateur" required>
    <label>Confirmation:</label>
    <input type="text" name = "conf nom utilisateur" required>

    <button class ="submit rouge" type="submit" value="changer nom utilisateur">Valider</button>
  </form>
      </div>
<div class="col-md-1">
  </div>
  <div class="col-md-3" id="rectangle">
    <center><h4>Changer de mot de passe</h4></center>
    <form method="post" >
    <label>Nouveau mot de passe:</label>
    <input type="password" name = "mot de passe" required>
    <label>Confirmation:</label>
    <input type="password" name = "conf mot de passe" required>

    <button class ="submit jaune" type="submit" value="changer mot de passe">Valider</button>
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
  <tr>
    <td></br>12</td>
    <td></br>84</td>
    <td></br>486845661468</td>
    <td><button class ="submit" type="submit" value="supprime" id="supprimer">x</button></td>

</tr>
<tr>
  <td></br>12</td>
  <td></br>84</td>
  <td></br>4868498</td>
  <td><button class ="submit" type="submit" value="supprime" id="supprimer">x</button></td>

</tr>
<tr>
  <td></br>12</td>
  <td></br>84</td>
  <td></br>484894</td>
  <td><button class ="submit" type="submit" value="supprime" id="supprimer">x</button></td>

</tr>

</table>
</div>
  </div>

</div>
</body>
</html>
