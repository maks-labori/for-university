
#include "Triangle.h"

int main(){
    std::cout << "Input side triangle\n";
    double a, b, c;
    std::string input;
    int cnt = 1;
    while (cnt < 4) {
        std::cout << "\nInput " << cnt << " side\n";
        std::getline(std::cin, input);
        try {
            switch (cnt) {
            case 1:a = std::stod(input);
            case 2:b = std::stod(input);
            case 3:c = std::stod(input);
            }
            if (std::stod(input) <= 0) { throw std::logic_error(""); }
        }
        catch(...){
            std::cout << "Uncorrect input,try again";
            continue;
        }
        cnt++;
    }
    if (a + b < c or a + c < b or b + c < a) { std::cout << "Triangle with these side is exist";return 0; }
    double x = (a * a + c * c - b * b) / (2 * a);
    double h = sqrt(c*c - x*x);
    Triangle triangle(a, h);
    std::cout << "Area: " << triangle.calc_area();
    return 0;
}