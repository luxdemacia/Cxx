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
#include <bitset>	//	Permet de convertir un nombre en binaire
using namespace std;	// Cette ligne permet d'utiliser tous les noms du namespace std sans avoir à les précéder de std::. Par exemple, au lieu d'écrire std::cout, nous pouvons simplement écrire cout.

int main()	//	On pourrait bien sûr le faire sans les arguments : int main()
{
	//Types
	//u, U (non signé)
	//f, F (flottant)
	//l, L (long int, long double)
	//ll, LL (long long int, long long double int)
	
	
	//Les conversions
	//0b (binaire)
	//0 (octal)
	//0x (hexadécimal)
	
	cout<<"\nSalut Codex comment vas tu ?"<<endl;
	//bool IsOpen{};
	//float Somme{50.0f};	//	Par défaut ils sont initialisés à 0 les {}.
	
	int n;
	cout<<"Donner le nombre à convertir :"<<endl;
	cin>>n;
	cout<<"Le nombre en base décimal(10) est :"<< dec << n <<endl;
	cout<<"Le nombre en binaire (Base(2)) est : "<< bitset<8>(n) <<endl;
	cout<<"Le nombre en hexadécimal (Base(16)) est : "<< hex << (n) <<endl;
	
	return 0;
}

//	int main(int argc, char **argv) : C'est la fonction principale du programme, où l'exécution commence.
//	int argc : Cela représente le nombre d'arguments passés au programme via la ligne de commande (y compris le nom du programme lui-même).
//	char **argv : C'est un tableau de chaînes de caractères qui contient les arguments passés au programme.
//	{} : Elle représente l'ouverture et la fermeture de la fonction main().
//	cout : est utilisé pour afficher des données sur la sortie standard (Stockage en la memoire tempon)
//	clog : pour les logs (Stockage en memoire tempon)
// 	cerr : la sortie d'erreur standard (Affichage directe )
//	endl : retour à la ligne + flush (vide memoire)
//	return 0; : Cette ligne termine la fonction main et retourne 0 au système d'exploitation. Un retour de 0 indique que le programme s'est exécuté avec succès.
