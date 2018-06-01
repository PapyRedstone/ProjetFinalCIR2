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


#------------------------------------------------------------
# Table: Proposition
#------------------------------------------------------------

CREATE TABLE Proposition(
        id_proposition Int  Auto_increment  NOT NULL ,
        proposition    Varchar (50) NOT NULL ,
        est_active     Bool NOT NULL ,
        bonne_reponse  Int NOT NULL ,
        id_question    Int NOT NULL
	,CONSTRAINT Proposition_PK PRIMARY KEY (id_proposition)

	,CONSTRAINT Proposition_Question_FK FOREIGN KEY (id_question) REFERENCES Question(id_question)
)ENGINE=InnoDB;


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


#------------------------------------------------------------
# Table: Palmares
#------------------------------------------------------------

CREATE TABLE Palmares(
        id_palamares Int  Auto_increment  NOT NULL ,
        score        Int NOT NULL ,
        id_user      Int NOT NULL
	,CONSTRAINT Palmares_PK PRIMARY KEY (id_palamares)

	,CONSTRAINT Palmares_user_FK FOREIGN KEY (id_user) REFERENCES user(id_user)
)ENGINE=InnoDB;
