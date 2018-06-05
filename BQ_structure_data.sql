-- phpMyAdmin SQL Dump
-- version 4.6.6deb5
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Jun 05, 2018 at 02:09 PM
-- Server version: 5.7.22-0ubuntu18.04.1
-- PHP Version: 7.2.5-0ubuntu0.18.04.1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `bq`
--

-- --------------------------------------------------------

--
-- Table structure for table `A_pour_notes`
--

CREATE TABLE `A_pour_notes` (
  `id_proposition` int(11) NOT NULL,
  `Note` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `A_pour_notes`
--

INSERT INTO `A_pour_notes` (`id_proposition`, `Note`) VALUES
(1, 6),
(3, 6),
(5, 6);

-- --------------------------------------------------------

--
-- Table structure for table `contient`
--

CREATE TABLE `contient` (
  `id_proposition` int(11) NOT NULL,
  `seed` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `contient`
--

INSERT INTO `contient` (`id_proposition`, `seed`) VALUES
(1, 123),
(3, 123),
(5, 123);

-- --------------------------------------------------------

--
-- Table structure for table `Jeu`
--

CREATE TABLE `Jeu` (
  `seed` int(11) NOT NULL,
  `nb_fois_jouer` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `Jeu`
--

INSERT INTO `Jeu` (`seed`, `nb_fois_jouer`) VALUES
(123, 11);

-- --------------------------------------------------------

--
-- Table structure for table `Note`
--

CREATE TABLE `Note` (
  `Note` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `Note`
--

INSERT INTO `Note` (`Note`) VALUES
(0),
(1),
(2),
(3),
(4),
(5),
(6),
(7),
(8),
(9),
(10);

-- --------------------------------------------------------

--
-- Table structure for table `Palmares`
--

CREATE TABLE `Palmares` (
  `id_palmares` int(11) NOT NULL,
  `score` int(11) NOT NULL,
  `id_user` int(11) NOT NULL,
  `seed` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `Palmares`
--

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
(11, 8, 5, 123),
(12, 0, 5, 123),
(13, 0, 5, 123),
(14, 0, 5, 123),
(15, 0, 5, 123),
(16, 0, 5, 123);

-- --------------------------------------------------------

--
-- Table structure for table `Proposition`
--

CREATE TABLE `Proposition` (
  `id_proposition` int(11) NOT NULL,
  `proposition` varchar(50) NOT NULL,
  `bonne_reponse` int(11) NOT NULL,
  `est_active` tinyint(1) NOT NULL,
  `id_question` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `Proposition`
--

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

-- --------------------------------------------------------

--
-- Table structure for table `Question`
--

CREATE TABLE `Question` (
  `id_question` int(11) NOT NULL,
  `choix1` varchar(50) NOT NULL,
  `choix2` varchar(50) NOT NULL,
  `est_active` tinyint(1) NOT NULL,
  `id_theme` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `Question`
--

INSERT INTO `Question` (`id_question`, `choix1`, `choix2`, `est_active`, `id_theme`) VALUES
(1, 'Rennais', 'Brestois', 1, 1),
(2, 'CIR', 'CGSI', 1, 1),
(3, 'Chien', 'Chat', 1, 2),
(4, 'Pikachu', 'Yeti', 1, 2),
(5, 'Audrey Tatou', 'Pikachu', 1, 3),
(6, 'Pamela Anderson', 'une voiture d\'occasion', 1, 3);

-- --------------------------------------------------------

--
-- Table structure for table `Theme`
--

CREATE TABLE `Theme` (
  `id_theme` int(11) NOT NULL,
  `theme` varchar(50) NOT NULL,
  `est_active` tinyint(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `Theme`
--

INSERT INTO `Theme` (`id_theme`, `theme`, `est_active`) VALUES
(1, 'ISEN', 1),
(2, 'Animaux', 1),
(3, 'People', 1);

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `id_user` int(11) NOT NULL,
  `name` varchar(50) NOT NULL,
  `password_hash` varchar(50) NOT NULL,
  `est_active` tinyint(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`id_user`, `name`, `password_hash`, `est_active`) VALUES
(1, 'nop', 'cc2.nB1WyfoA2', 1),
(2, 'toi', '0cY6oStGLrTyU', 1),
(3, 'moi', '8fg2M3lvmh/ic', 1),
(5, 'alex', '53vNXE7uJUbWc', 1);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `A_pour_notes`
--
ALTER TABLE `A_pour_notes`
  ADD PRIMARY KEY (`id_proposition`,`Note`),
  ADD KEY `A_pour_notes_Note0_FK` (`Note`);

--
-- Indexes for table `contient`
--
ALTER TABLE `contient`
  ADD PRIMARY KEY (`id_proposition`,`seed`),
  ADD KEY `contient_Jeu0_FK` (`seed`);

--
-- Indexes for table `Jeu`
--
ALTER TABLE `Jeu`
  ADD PRIMARY KEY (`seed`);

--
-- Indexes for table `Note`
--
ALTER TABLE `Note`
  ADD PRIMARY KEY (`Note`);

--
-- Indexes for table `Palmares`
--
ALTER TABLE `Palmares`
  ADD PRIMARY KEY (`id_palmares`),
  ADD KEY `Palmares_user_FK` (`id_user`),
  ADD KEY `Palmares_Jeu0_FK` (`seed`);

--
-- Indexes for table `Proposition`
--
ALTER TABLE `Proposition`
  ADD PRIMARY KEY (`id_proposition`),
  ADD KEY `Proposition_Question_FK` (`id_question`);

--
-- Indexes for table `Question`
--
ALTER TABLE `Question`
  ADD PRIMARY KEY (`id_question`),
  ADD KEY `Question_Theme_FK` (`id_theme`);

--
-- Indexes for table `Theme`
--
ALTER TABLE `Theme`
  ADD PRIMARY KEY (`id_theme`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`id_user`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `Palmares`
--
ALTER TABLE `Palmares`
  MODIFY `id_palmares` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=17;
--
-- AUTO_INCREMENT for table `Proposition`
--
ALTER TABLE `Proposition`
  MODIFY `id_proposition` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=20;
--
-- AUTO_INCREMENT for table `Question`
--
ALTER TABLE `Question`
  MODIFY `id_question` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
--
-- AUTO_INCREMENT for table `Theme`
--
ALTER TABLE `Theme`
  MODIFY `id_theme` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `id_user` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
--
-- Constraints for dumped tables
--

--
-- Constraints for table `A_pour_notes`
--
ALTER TABLE `A_pour_notes`
  ADD CONSTRAINT `A_pour_notes_Note0_FK` FOREIGN KEY (`Note`) REFERENCES `Note` (`Note`),
  ADD CONSTRAINT `A_pour_notes_Proposition_FK` FOREIGN KEY (`id_proposition`) REFERENCES `Proposition` (`id_proposition`);

--
-- Constraints for table `contient`
--
ALTER TABLE `contient`
  ADD CONSTRAINT `contient_Jeu0_FK` FOREIGN KEY (`seed`) REFERENCES `Jeu` (`seed`),
  ADD CONSTRAINT `contient_Proposition_FK` FOREIGN KEY (`id_proposition`) REFERENCES `Proposition` (`id_proposition`);

--
-- Constraints for table `Palmares`
--
ALTER TABLE `Palmares`
  ADD CONSTRAINT `Palmares_Jeu0_FK` FOREIGN KEY (`seed`) REFERENCES `Jeu` (`seed`),
  ADD CONSTRAINT `Palmares_user_FK` FOREIGN KEY (`id_user`) REFERENCES `user` (`id_user`);

--
-- Constraints for table `Proposition`
--
ALTER TABLE `Proposition`
  ADD CONSTRAINT `Proposition_Question_FK` FOREIGN KEY (`id_question`) REFERENCES `Question` (`id_question`);

--
-- Constraints for table `Question`
--
ALTER TABLE `Question`
  ADD CONSTRAINT `Question_Theme_FK` FOREIGN KEY (`id_theme`) REFERENCES `Theme` (`id_theme`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
