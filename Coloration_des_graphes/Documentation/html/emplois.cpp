#include <iostream>
#include <cstdlib>
#include <fstream>

int main (int argc, char*argv[]) {
	std::cout << "\nEmplois du Temps" << std::endl; //Ceci est le titre du projet
	
	std::string dayOfWeek;
	std::cout <<"Entrez le jour que vous voulez ou sinon le mot clé professeur >> ";
	std::cin >> dayOfWeek;

	std::ifstream readFile;

	if (dayOfWeek == "lundi" || dayOfWeek == "Lundi") readFile.open("jours/lundi.txt"); //sélectionez lundi comme jour pour afficher l'emplois du temps de lundi dans un tableau dans le terminal
	else if (dayOfWeek == "mardi" || dayOfWeek == "Mardi") readFile.open("jours/mardi.txt"); //sélectionez mardi comme jour pour afficher l'emplois du temps de mardi dans un tableau dans le terminal
	else if (dayOfWeek == "mercredi" || dayOfWeek == "Mercredi") readFile.open("jours/mercredi.txt"); //sélectionez mercredi comme jour pour afficher l'emplois du temps de mercredi dans un tableau dans le terminal
	else if (dayOfWeek == "jeudi" || dayOfWeek == "Jeudi") readFile.open("jours/jeudi.txt"); //sélectionez jeudi comme jour pour afficher l'emplois du temps de jeudi dans un tableau dans le terminal
	else if (dayOfWeek == "vendredi" || dayOfWeek == "Vendredi") readFile.open("jours/vendredi.txt"); //sélectionez vendredi comme jour pour afficher l'emplois du temps de vendredi dans un tableau dans le terminal
	else if (dayOfWeek == "samedi" || dayOfWeek == "Samedi") readFile.open("jours/samedi.txt"); //sélectionez samedi comme jour pour afficher l'emplois du temps de samedi dans un tableau dans le terminal
	else if (dayOfWeek == "professeur" || dayOfWeek == "Professeur") readFile.open("jours/professeur.txt"); //sélectionez Professeur comme jour pour afficher l'emplois du temps de Professeur dans un tableau dans le terminal
	else { std::cout << "\nVeuillez entrer un jour entre Lundi et Samedi ou un nom valid\n" << std::endl; exit(0); } //Ceci est le message qui s'affiche pour indiquer à l'utilisateur qu'il doit faire un choix

//Après avoir choisi un jour de la semaine, le programme va chercher le jour sélectionné par l'utilisateur dans le dossier jour.

	std::string readFileString;

	std::cout <<"\nEmplois du temps journalié:" << std::endl;
	while (getline(readFile, readFileString)) { std::cout << readFileString << std::endl; }
	readFile.close(); //Ligne pour faire le fichier
	
	std::cout << "\nAurevoir\n" <<std::endl; 

	return 0;
}
