#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <string>

// 具体产品：矩形
class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void draw() const override;
    std::string getType() const override;
};

#endif // RECTANGLE_H
    