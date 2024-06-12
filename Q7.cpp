#include <iostream>

const double PI = 3.14159;

double calculateCirclePerimeter(double radius) {
    return 2 * PI * radius;
}

double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    if (radius <= 0) {
        std::cout << "Invalid radius. Please enter a positive value." << std::endl;
        return 1;
    }

    double perimeter = calculateCirclePerimeter(radius);
    double area = calculateCircleArea(radius);

    std::cout << "Circle Perimeter: " << perimeter << std::endl;
    std::cout << "Circle Area: " << area << std::endl;

    return 0;
}