-- phpMyAdmin SQL Dump
-- version 4.6.6deb5
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Jun 05, 2018 at 12:51 PM
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

--
-- Dumping data for table `contient`
--

INSERT INTO `contient` (`id_proposition`, `seed`) VALUES
(1, 123),
(3, 123),
(5, 123);

--
-- Dumping data for table `Jeu`
--

INSERT INTO `Jeu` (`seed`, `nb_fois_jouer`, `score`) VALUES
(123, 6, 0);

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
(11, 8, 5, 123);

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

--
-- Dumping data for table `Theme`
--

INSERT INTO `Theme` (`id_theme`, `theme`, `est_active`) VALUES
(1, 'ISEN', 1),
(2, 'Animaux', 1),
(3, 'People', 1);

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`id_user`, `name`, `password_hash`, `est_active`) VALUES
(1, 'nop', 'cc2.nB1WyfoA2', 1),
(2, 'toi', '0cY6oStGLrTyU', 1),
(3, 'moi', '8fg2M3lvmh/ic', 1),
(5, 'alex', '53vNXE7uJUbWc', 1);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
