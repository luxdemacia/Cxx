#include "Point.hpp"  

//  Le constructeur  
Point::Point(double x, double y, double z) : M_x(x), M_y(y), M_z(z) {}  

// Implémentation (Et c'est ici qu'on fait la liasons de l'implémentation dans Point.cxx aux déclarations dans Point.hpp)
double Point::x() const { return M_x; }  
double Point::y() const { return M_y; }  
double Point::z() const { return M_z; }  

// Surcharge de l'opérateur +=  
Point & Point::operator +=(Point const & pt) {  
    M_x += pt.x();  
    M_y += pt.y();  
    M_z += pt.z();  
    return *this;  
}

