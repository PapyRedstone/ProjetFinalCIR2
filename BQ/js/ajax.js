'use strict';

function httpError(errorCode){
    location.href="../php/error.php/"+errorCode;
}

function ajaxRequest(type, request, callback, data = null){
    var xhr;

    xhr = new XMLHttpRequest();
    if((type == 'GET' || type == 'DELETE') && data != null){
	request += '?' + data;
	data = null;
    }
    xhr.open(type, request, true);

    if(type == "POST" || type == "PUT"){
	xhr.setRequestHeader('Content-Type','application/x-www-form-urlencoded');
    }
    
    xhr.onload = function(){
	switch(xhr.status){
	case 200:
	case 201:
	    callback(xhr.responseText);
	    break;
	    
	default:
	    httpError(xhr.status);
	    break;
	}
    }
    
    xhr.send(data);
}
