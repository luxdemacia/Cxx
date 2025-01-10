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

#include <iostream>
#include <bitset> // Pour afficher les valeurs en binaire
using namespace std;

int main()
{
    // Suffixes
    // u, U (non signé)
    // f, F (flottant)
    // l, L (long int, long double)
    // ll, LL (long long int, long long double int)
    
    // Préfixes
    // 0b (binaire)
	//	decimal
    // 0 (octal)
    // 0x (hexadécimal)
    
    cout << "\nSalut Boubacar comment vas-tu ?" << endl;
    cout << "As-tu bien mangé ?" << endl;

	int annee = 1994;

    // Affichage dans différents formats
    cout << "\nAffichage de  l'année de naissance dans différents formats :\n";
    cout << "Décimal (Qui est la base naturelle ou la base que l'on utilise par défaut)      : " << annee << endl;
    cout << "Binaire (Qui est le language machine, langage dont les ordinateurs comprennent)      : " << bitset<16>(annee) << endl; // 16 bits pour afficher le binaire
    cout << "Octal (C'est la base 8)         : " << oct << annee << endl; // oct manipule l'affichage en octal
    cout << "Hexadécimal (C'est la base 16)  : " << hex << annee << endl; // hex manipule l'affichage en hexadécimal

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

