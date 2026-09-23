#pragma once
#include <iostream>
#include <cmath>
#include <string>

class Triangle {
private:
    double _side;
    double _height;
public:
    Triangle(double side, double height);
    double get_side()const noexcept;
    double get_height()const noexcept;
    void set_side(double side);
    void set_height(double height);
    double calc_area()const noexcept;
};