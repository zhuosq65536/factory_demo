#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <string>

// 具体产品：圆形
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    void draw() const override;
    std::string getType() const override;
};

#endif // CIRCLE_H
    text d