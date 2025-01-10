#include <iostream>  
#include "Point.hpp"  

int main() {  
    Point p(5.2, 10.1, 30);  
    Point q(10.5, 20, 36.3);  

	// On additionne les coordonnées de p à celles de q
    p += q;  
    std::cout << "Le poit x=" << p.x() << " le point y=" << p.y() << " et le point z=" << p.z() << std::endl;  
    return 0;  
}