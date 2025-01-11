#include <iostream>
#include <string> // pour les chaines de caractères
using namespace std;

int main()
{
    string chaine;
    cout << "Entrez une chaine de caractères : ";
    cin >> chaine;
    cout << "Vous avez entré : " << chaine << endl;
    return 0;
}

// Comme on le remaque avec cet exemple, la saisie de la chaine de caractères s'arrête dès qu'on rencontre un espace.
// Pour lire une chaine de caractères contenant des espaces, on utilise la fonction getline() de la bibliothèque <string> :
// Path: Chaines/Exemple2.cxx
