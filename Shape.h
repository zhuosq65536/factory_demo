#ifndef SHAPE_H
#define SHAPE_H

#include <string>

// 抽象产品：图形基类
class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
    virtual std::string getType() const = 0;
};

#endif // SHAPE_H
    