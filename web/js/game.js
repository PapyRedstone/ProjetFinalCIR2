function modifValues(){
    var val = $('#progress progress').attr('value');
    var newVal = val*1-0.25;
    $('#progress progress').attr('value',newVal).text(txt);
    
}

window.onload=function(){
    setInterval(modifValues(),25);
    
    duree="10";
    temps();
}

function temps()
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
    window.setTimeout("temps();",999);
}