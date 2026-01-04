#include "ShapeFactory.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    ShapeFactory factory;
    
    try {
        // 使用工厂创建不同的图形
        auto circle = factory.createShape("circle");
        auto rectangle = factory.createShape("rectangle");
        
        // 存储图形的容器
        std::vector<std::unique_ptr<Shape>> shapes;
        shapes.push_back(std::move(circle));
        shapes.push_back(std::move(rectangle));
        
        // 操作图形
        for (const auto& shape : shapes) {
            std::cout << "Shape type: " << shape->getType() << std::endl;
            shape->draw();
            std::cout << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
    