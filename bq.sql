#------------------------------------------------------------
#        Script MySQL.
#------------------------------------------------------------


#------------------------------------------------------------
# Table: Theme
#------------------------------------------------------------

CREATE TABLE Theme(
        id_theme   Int  Auto_increment  NOT NULL ,
        theme      Varchar (50) NOT NULL ,
        est_active Bool NOT NULL
	,CONSTRAINT Theme_PK PRIMARY KEY (id_theme)
)ENGINE=InnoDB;

INSERT INTO `Theme` (`id_theme`, `theme`, `est_active`) VALUES
(1, 'ISEN', 1),
(2, 'Animaux', 1),
(3, 'People', 1);


#------------------------------------------------------------
# Table: Question
#------------------------------------------------------------

CREATE TABLE Question(
        id_question Int  Auto_increment  NOT NULL ,
        choix1      Varchar (50) NOT NULL ,
        choix2      Varchar (50) NOT NULL ,
        est_active  Bool NOT NULL ,
        id_theme    Int NOT NULL
	,CONSTRAINT Question_PK PRIMARY KEY (id_question)

	,CONSTRAINT Question_Theme_FK FOREIGN KEY (id_theme) REFERENCES Theme(id_theme)
)ENGINE=InnoDB;

INSERT INTO `Question` (`id_question`, `choix1`, `choix2`, `est_active`, `id_theme`) VALUES
(1, 'Rennais', 'Brestois', 1, 1),
(2, 'CIR', 'CGSI', 1, 1),
(3, 'Chien', 'Chat', 1, 2),
(4, 'Pikachu', 'Yeti', 1, 2),
(5, 'Audrey Tatou', 'Pikachu', 1, 3),
(6, 'Pamela Anderson', 'une voiture d\'occasion', 1, 3);


#------------------------------------------------------------
# Table: Proposition
#------------------------------------------------------------

CREATE TABLE Proposition(
        id_proposition Int  Auto_increment  NOT NULL ,
        proposition    Varchar (50) NOT NULL ,
        bonne_reponse  Int NOT NULL ,
        est_active     Bool NOT NULL ,
        id_question    Int NOT NULL
	,CONSTRAINT Proposition_PK PRIMARY KEY (id_proposition)

	,CONSTRAINT Proposition_Question_FK FOREIGN KEY (id_question) REFERENCES Question(id_question)
)ENGINE=InnoDB;

INSERT INTO `Proposition` (`id_proposition`, `proposition`, `bonne_reponse`, `est_active`, `id_question`) VALUES
(1, 'Sont les plus beaux', 2, 1, 1),
(3, 'Sont alcooliques', 3, 1, 1),
(4, 'N\'ont jamais vu le soleil', 3, 1, 1),
(5, 'Peuvent etre a Rennes', 1, 1, 2),
(6, 'Peuvent etre a Nantes', 3, 1, 2),
(7, 'Sont les meilleurs', 1, 1, 2),
(8, 'Fait ses griffes partout sauf la ou il faut', 2, 1, 3),
(9, 'Rapporte la balle', 1, 1, 3),
(10, 'Il faut le promener', 1, 1, 3),
(11, 'Est jaune', 1, 1, 4),
(12, 'Est poilu', 3, 1, 4),
(13, 'Habite en Himalaya', 2, 1, 4),
(14, 'A fait du cinema', 1, 1, 5),
(15, 'Ne sait dire que son nom', 2, 1, 5),
(16, 'Peut changer de forme', 2, 1, 5),
(17, 'Ne coute pas cher', 2, 1, 6),
(18, 'N\'as pas des pieces d\'origines', 3, 1, 6),
(19, 'A des kilometres au compteur', 3, 1, 6);



#------------------------------------------------------------
# Table: user
#------------------------------------------------------------

CREATE TABLE user(
        id_user       Int  Auto_increment  NOT NULL ,
        name          Varchar (50) NOT NULL ,
        password_hash Varchar (50) NOT NULL ,
        est_active    Bool NOT NULL
	,CONSTRAINT user_PK PRIMARY KEY (id_user)
)ENGINE=InnoDB;

INSERT INTO `user` (`id_user`, `name`, `password_hash`, `est_active`) VALUES
(1, 'nop', 'cc2.nB1WyfoA2', 1),
(2, 'toi', '0cY6oStGLrTyU', 1),
(3, 'moi', '8fg2M3lvmh/ic', 1),
(5, 'alex', '53vNXE7uJUbWc', 1);


#------------------------------------------------------------
# Table: Jeu
#------------------------------------------------------------

CREATE TABLE Jeu(
        seed          Int NOT NULL ,
        nb_fois_jouer Int NOT NULL
	,CONSTRAINT Jeu_PK PRIMARY KEY (seed)
)ENGINE=InnoDB;

INSERT INTO `Jeu` (`seed`, `nb_fois_jouer`) VALUES
(123, 6);

#------------------------------------------------------------
# Table: Palmares
#------------------------------------------------------------

CREATE TABLE Palmares(
        id_palmares Int  Auto_increment  NOT NULL ,
        score       Int NOT NULL ,
        id_user     Int NOT NULL ,
        seed        Int NOT NULL
	,CONSTRAINT Palmares_PK PRIMARY KEY (id_palmares)

	,CONSTRAINT Palmares_user_FK FOREIGN KEY (id_user) REFERENCES user(id_user)
	,CONSTRAINT Palmares_Jeu0_FK FOREIGN KEY (seed) REFERENCES Jeu(seed)
)ENGINE=InnoDB;

INSERT INTO `Palmares` (`id_palmares`, `score`, `id_user`, `seed`) VALUES
(1, 10, 1, 123),
(2, 20, 2, 123),
(3, 40, 3, 123),
(4, 4000, 5, 123),
(5, 40, 5, 123),
(6, 8, 5, 123),
(7, 8, 5, 123),
(8, 8, 5, 123),
(9, 8, 5, 123),
(10, 8, 5, 123),
(11, 8, 5, 123);


#------------------------------------------------------------
# Table: Note
#------------------------------------------------------------

CREATE TABLE Note(
        Note Int NOT NULL
	,CONSTRAINT Note_PK PRIMARY KEY (Note)
)ENGINE=InnoDB;

INSERT INTO Note VALUES
(10),
(9),
(8),
(7),
(6),
(5),
(4),
(3),
(2),
(1),
(0);



#------------------------------------------------------------
# Table: contient
#------------------------------------------------------------

CREATE TABLE contient(
        id_proposition Int NOT NULL ,
        seed           Int NOT NULL
	,CONSTRAINT contient_PK PRIMARY KEY (id_proposition,seed)

	,CONSTRAINT contient_Proposition_FK FOREIGN KEY (id_proposition) REFERENCES Proposition(id_proposition)
	,CONSTRAINT contient_Jeu0_FK FOREIGN KEY (seed) REFERENCES Jeu(seed)
)ENGINE=InnoDB;

INSERT INTO `contient` (`id_proposition`, `seed`) VALUES
(1, 123),
(3, 123),
(5, 123);


#------------------------------------------------------------
# Table: A pour notes
#------------------------------------------------------------

CREATE TABLE A_pour_notes(
        id_proposition Int NOT NULL ,
        Note           Int NOT NULL
	,CONSTRAINT A_pour_notes_PK PRIMARY KEY (id_proposition,Note)

	,CONSTRAINT A_pour_notes_Proposition_FK FOREIGN KEY (id_proposition) REFERENCES Proposition(id_proposition)
	,CONSTRAINT A_pour_notes_Note0_FK FOREIGN KEY (Note) REFERENCES Note(Note)
)ENGINE=InnoDB;

