window.onload = function() {
    ajaxRequest('GET','/web/php/crud.php',callbackTheme,'ressource=theme');
}

function callbackTheme(txt){
    div = document.getElementById("theme");

    str = '';

    data = JSON.parse(txt);

    for(d in data){
	str += '<button type="button" class="list-group-item" id="'+data[d]["id_theme"]+'" onclick="loadQuestions('+data[d]["id_theme"]+')">'+data[d]["theme"]+'</button>';
    }

    div.innerHTML = str;
}

function loadQuestions(id_theme){
    document.getElementById("addQues").onclick = function(){addQuestion(id_theme);};

    div = document.getElementById("proposition").innerHTML = '';

    ajaxRequest('GET','/web/php/crud.php',callbackQuestion,'ressource=question&id_theme='+id_theme);
}

function callbackQuestion(txt){
    div = document.getElementById("question");

    str = '';

    data = JSON.parse(txt);

    for(d in data){
	str += '<button type="button" class="list-group-item" id="'+data[d]["id_question"]+'" onclick="loadProposition('+data[d]["id_question"]+');">'+data[d]["choix1"]+' ou '+data[d]["choix2"]+'</button>';
    }

    div.innerHTML = str;
}

function loadProposition(id_question){
    document.getElementById("addProp").onclick = function(){addProposition(id_question);};

    ajaxRequest('GET','/web/php/crud.php',callbackChoice,'ressource=question&id_question='+id_question);

    ajaxRequest('GET','/web/php/crud.php',callbackProposition,'ressource=proposition&id_question='+id_question);
}

function callbackChoice(txt){
    data = JSON.parse(txt)[0];

    document.getElementById("radio1").innerHTML = data["choix1"];
    document.getElementById("radio2").innerHTML = data["choix2"];
}

function callbackProposition(txt){
    div = document.getElementById("proposition");

    str = '';

    data = JSON.parse(txt);

    for(d in data){
	str += '<button type="button" class="list-group-item" id="'+data[d]["id_proposition"]+'">'+data[d]["proposition"]+'</button>';
    }

    div.innerHTML = str;
}

function addTheme(){
    theme = document.getElementById("ntheme").value;

    ajaxRequest('POST', '/web/php/crud.php/theme', function(){}, 'theme='+theme);

    ajaxRequest('GET','/web/php/crud.php',callbackTheme,'ressource=theme');
}

function addQuestion(id){
    choix1 = document.getElementById("choix1").value;
    choix2 = document.getElementById("choix2").value;

    ajaxRequest('POST', '/web/php/crud.php/question', function(){}, 'choix1='+choix1+'&choix2='+choix2+'&idt='+id);

    ajaxRequest('GET','/web/php/crud.php',callbackQuestion,'ressource=question&id_theme='+id);
}

function addProposition(id){
    proposition = document.getElementById("nproposition").value;
    radioButton = document.getElementsByName("bonneRep");

    for(i=0; i<radioButton.length; i++){
	if(radioButton[i].checked){
	    bonneRep = radioButton[i].value;
	    break;
	}
    }

    ajaxRequest('POST', '/web/php/crud.php/proposition', function(){}, 'prop='+proposition+'&rep='+bonneRep+'&idq='+id);

    ajaxRequest('GET','/web/php/crud.php',callbackProposition,'ressource=proposition&id_question='+id);
}
