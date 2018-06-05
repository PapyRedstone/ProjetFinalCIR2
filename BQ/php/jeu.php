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
<script language="JavaScript">
function modifValues(){
    var val = $('#progress progress').attr('value');
    var newVal = val*1-0.25;
    $('#progress progress').attr('value',newVal).text(txt);

}
setInterval(function(){ modifValues(); },25);  </script>

<div id="progress">
    <progress value="100" min="0" max="100"><span></span></progress>
</div>



<script language="JavaScript">

                function t()
                {
            var compteur=document.getElementById('compteur');
            s=duree;
            m=0;h=0;
            if(s<0)
                        {
                              location.href="../php/jeu.php"
            }
                        else
                        {
                                if(s>59)
                                {
                                        m=Math.floor(s/60);
                                        s=s-m*60
                }
                                if(m>59)
                                {
                                        h=Math.floor(m/60);
                    m=m-h*60
                                }
                if(s<10)
                                {
                                        s="0"+s
                }
                if(m<10)
                                {
                    m="0"+m
                }
                  compteur.innerHTML=s+"s<br />"
            }
            duree=duree-1;
            window.setTimeout("t();",999);

        }

                </script>

                <h1><center><div id="compteur"></div></center></h1>
                <script language="JavaScript">
                        duree="10";
                        t();
                </script>

</body>
</html>
