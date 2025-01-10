#include "Point.hpp"  

// Constructeur  
Point::Point(double x, double y, double z) : M_x(x), M_y(y), M_z(z) {}  

// Accesseurs  
double Point::x() const { return M_x; }  
double Point::y() const { return M_y; }  
double Point::z() const { return M_z; }  

// Surcharge de l'opérateur +=  
Point& Point::operator +=(Point const& pt) {  
    M_x += pt.x();  
    M_y += pt.y();  
    M_z += pt.z();  
    return *this;  
} 