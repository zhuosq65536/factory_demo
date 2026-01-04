#include "ShapeFactory.h"
#include "Circle.h"
#include "Rectangle.h"
#include <stdexcept>

std::unique_ptr<Shape> ShapeFactory::createShape(const std::string& type) {
    if (type == "circle") {
        return std::make_unique<Circle>(5.0); // 半径为5的圆
    } else if (type == "rectangle") {
        return std::make_unique<Rectangle>(4.0, 6.0); // 宽4高6的矩形
    } else {
        throw std::invalid_argument("Unknown shape type: " + type);
    }
}
    