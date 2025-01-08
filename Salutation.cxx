/*
 * Salutation.cxx
 * 
 * Copyright 2025 elhad <elhad@DESKTOP-DB63BVS>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>	 // Cette directive d'inclusion indique au compilateur d'importer le fichier d'en-tête iostream, qui permet d'utiliser des fonctionnalités d'entrée et de sortie standard, comme cout et cin.
using namespace std;	// Cette ligne permet d'utiliser tous les noms du namespace std sans avoir à les précéder de std::. Par exemple, au lieu d'écrire std::cout, nous pouvons simplement écrire cout.

int main(int argc, char **argv)	//	On pourrait bien sûr le faire sans les arguments : int main()
{
	cout<<"\nSalut Boubacar comment vas tu ?"<<endl;
	return 0;
}

//	int main(int argc, char **argv) : C'est la fonction principale du programme, où l'exécution commence.
//	int argc : Cela représente le nombre d'arguments passés au programme via la ligne de commande (y compris le nom du programme lui-même).
//	char **argv : C'est un tableau de chaînes de caractères qui contient les arguments passés au programme.
//	{} : Elle représente l'ouverture et la fermeture de la fonction main().
//	cout : est utilisé pour afficher des données sur la sortie standard.
//	endl : est un manipulateur qui insère un caractère de nouvelle ligne dans la sortie et vide (flush) le tampon de sortie (Cela garantit que tout ce qui a été envoyé à cout est bien affiché à l'écran immédiatement.)
//	return 0; : Cette ligne termine la fonction main et retourne 0 au système d'exploitation. Un retour de 0 indique que le programme s'est exécuté avec succès.
