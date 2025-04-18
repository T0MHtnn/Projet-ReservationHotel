
/* Fichier contenant les instructions sql pour créer les tables de la base de données de l'appli de gestion hospitalier*/
/* NOM DE LA BDD : reservationhotel */
/* Créateur : Jules Forest */
/* Implémentation : Vanessa Antivackis */

CREATE TABLE Adresse(
   idAdresse INT AUTO_INCREMENT,
   numero INT,
   rue VARCHAR(100) NOT NULL,
   ville VARCHAR(50) NOT NULL,
   codePostal INT NOT NULL,
   pays VARCHAR(50) NOT NULL,
   PRIMARY KEY(idAdresse)
);

CREATE TABLE Hotel(
   idHotel INT AUTO_INCREMENT,
   nomHotel VARCHAR(50) NOT NULL,
   nbChambres INT,
   idAdresse INT NOT NULL,
   PRIMARY KEY(idHotel),
   FOREIGN KEY(idAdresse) REFERENCES Adresse(idAdresse)
);

CREATE TABLE Employe(
   numEmploye INT AUTO_INCREMENT,
   poste VARCHAR(50),
   nomEmploye VARCHAR(50) NOT NULL,
   prenomEmploye VARCHAR(50) NOT NULL,
   mdpEmploye VARCHAR(64) NOT NULL UNIQUE,
   estResponsable BOOLEAN NOT NULL,
   mailEmploye VARCHAR(70) NOT NULL,
   idHotel INT,
   PRIMARY KEY(numEmploye),
   FOREIGN KEY(idHotel) REFERENCES Hotel(idHotel)
);

CREATE TABLE Chambre(
   numChambre INT AUTO_INCREMENT,
   prix INT NOT NULL,
   nbCouchages INT NOT NULL,
   idHotel INT NOT NULL,
   PRIMARY KEY(numChambre),
   FOREIGN KEY(idHotel) REFERENCES Hotel(idHotel)
);

CREATE TABLE Administrateur(
   idAdmin INT AUTO_INCREMENT,
   mailAdmin VARCHAR(60) NOT NULL UNIQUE,
   mdpAdmin VARCHAR(64) NOT NULL,
   pseudoAdmin VARCHAR(50) NOT NULL,
   PRIMARY KEY(idAdmin)
);

CREATE TABLE Client(
   idClient INT AUTO_INCREMENT,
   nomClient VARCHAR(50) NOT NULL,
   prenomClient VARCHAR(50) NOT NULL,
   telephone VARCHAR(20) NOT NULL,
   mailClient VARCHAR(60) NOT NULL UNIQUE,
   mdpClient VARCHAR(64) NOT NULL,
   idAdresse INT NOT NULL,
   PRIMARY KEY(idClient),
   FOREIGN KEY(idAdresse) REFERENCES Adresse(idAdresse)
);

CREATE TABLE Reservation(
   idReservation INT AUTO_INCREMENT,
   dateArrive DATE NOT NULL,
   dateDepart DATE NOT NULL,
   estValide BOOLEAN NOT NULL,
   estTraite BOOLEAN NOT NULL,
   numChambre INT NOT NULL,
   idClient INT NOT NULL,
   PRIMARY KEY(idReservation),
   FOREIGN KEY(numChambre) REFERENCES Chambre(numChambre),
   FOREIGN KEY(idClient) REFERENCES Client(idClient)
);
