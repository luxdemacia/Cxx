#include "Somme.hpp"

void Somme::calculerSomme() const {
    int a = 0;
    int b = 0;
    std::cout << "Entrez un nombre : ";
    std::cin >> a;
    std::cout << "Entrez un autre nombre : ";
    std::cin >> b;
    std::cout << "La somme de " << a << " et " << b << " est " << a + b << std::endl;
}
