#include "Circle.h"
#include <iostream>

void Circle::draw() const {
    std::cout << "Drawing a circle with radius " << radius << std::endl;
}

std::string Circle::getType() const {
    return "Circle";
}
    