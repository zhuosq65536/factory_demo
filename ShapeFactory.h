#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "Shape.h"
#include <string>
#include <memory>

// 工厂类：负责创建图形对象
class ShapeFactory {
public:
    // 根据类型创建不同的图形
    std::unique_ptr<Shape> createShape(const std::string& type);
};

#endif // SHAPE_FACTORY_H
    