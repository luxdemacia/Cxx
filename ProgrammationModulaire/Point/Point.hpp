#ifndef POINT_HPP  
#define POINT_HPP  

class Point {  
public:  
    // Constructeur  
    Point(double x, double y, double z);  
    
    // Accesseurs  
    double x() const;
    double y() const;
    double z() const;
    
    // Surcharge de l'opérateur +=  
    Point& operator +=(Point const& pt);  

// Coordonnées du point  
private:  
    double M_x, M_y, M_z;
};  

// POINT_HPP 
#endif