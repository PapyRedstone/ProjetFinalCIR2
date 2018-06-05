var chrono=10;
var score=0;
var questions=[];
var timeId;
var seed;

window.onload=function(){
    setInterval(modifValues,25);
    questions = JSON.parse(document.getElementById("js").textContent);
    seed = questions.pop();
    displayNext();
}

function modifValues(){
    var val = $('#progress progress').attr('value');
    var newVal = val-0.25;
    $('#progress progress').attr('value',newVal);
}

function time()
{
    if(chrono<=0){
        clickOnButton(0);
    }

    chrono--;
    var compteur=document.getElementById('compteur');
    compteur.innerHTML=(chrono+1)+"s<br>";

    timeId = window.setTimeout(time,1000);
}

function clickOnButton(id_button){
    if(id_button == parseInt(currentQuestion["bonne_reponse"])){
	score += chrono;
    }

    if(questions.length != 0){
	window.setTimeout(displayNext, 100);
    }else{
	window.setTimeout(location.href = "../php/notation.php?score="+score+"&seed="+seed, 100);
    }
}

function displayNext(){
    currentQuestion = questions.shift();

    document.getElementById("reponse1").innerHTML = currentQuestion["choix1"];

    document.getElementById("reponse2").innerHTML = currentQuestion["choix2"];

    document.getElementById("proposition").innerHTML = currentQuestion["proposition"];

    document.getElementById("question").innerHTML = currentQuestion["choix1"]+', '+currentQuestion["choix2"]+' ou les deux ?';

    $('#progress progress').attr('value',100);

    clearTimeout(timeId);

    chrono=10;

    time();
}
