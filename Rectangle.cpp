#include "Rectangle.h"
#include <iostream>

void Rectangle::draw() const {
    std::cout << "Drawing a rectangle with width " << width 
              << " and height " << height << std::endl;
}

std::string Rectangle::getType() const {
    return "Rectangle";
}
    