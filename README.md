# ProjetFinalCIR2

Etapes pour l'installation:

Mise en place de la base de donnée:
     Ouvrez phpmyadmin
     Creer un utilisateur (gardez le nom/mot de passe)
     Creer un base de donnée (garder son nom)
     Donner tous les droits a cette utilisateur sur la base de donnees
     Cliquer sur importer
     Choisissez le fichier BQ_structure_data.sql qui est a la racine du dossier

Pour le site:
     Si vous avez un virtualhost:
     	Deplacer le contenu du dossier web a l'emplacement du dossier DocumentRoot

     Si non:
     	Deplacer le dossier web dans /var/www/html

     Modifiez le fichier php/constantes.php avec les informations de la base de données

Pour la partie administration:
     Deplacer le dossier BackOffice ou vous le souhaitez
     Entrer dans le dossier
     Taper les commandes:
     	   qmake
	   make
	   ./BackOffice
     Entrer les informations de la base de donnée
	   
