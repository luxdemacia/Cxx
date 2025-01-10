#include <iostream>  
#include "Point.hpp"  

int main() {  
    Point p(5.2, 10.1, 30);  
    Point q(10.5, 20, 36.3);  

	// Additionne les coordonnées de q à celles de p
    p += q;  
    std::cout << "x=" << p.x() << " y=" << p.y() << " z=" << p.z() << "\n";  
    return 0;  
}