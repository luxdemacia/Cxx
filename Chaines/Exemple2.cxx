# include <iostream>
# include <string>
using namespace std;

int main()
{
    string chaine;
    cout << "Entrez une chaine de caractères : ";
    getline(cin, chaine);
    cout << "Vous avez entré : " << chaine << endl;
    return 0;
}

// La fonction getline() prend en paramètres un flux d'entrée (cin) et une chaine de caractères (chaine) et lit une ligne entière de texte,
