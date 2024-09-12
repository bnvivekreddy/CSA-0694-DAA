#include <iostream>
#include <cmath> 
using namespace std;
class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w)
	{
        height=h;
        width=w;
    }
    virtual double area() = 0;
    virtual double perimeter() = 0;
};
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    double area() override {
        return height * width;
    }
    double perimeter() override {
        return 2 * (height + width);
    }
};
class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    double area() override 
	{
        return 0.5 * height * width;
    }
    double perimeter() override 
	{
        double hypotenuse = sqrt((height * height) + (width / 2) * (width / 2));
        return width + 2 * hypotenuse;
    }
};
int main() {
    Rectangle rect(10, 20);
    Triangle tri(10, 20);
    cout << "Rectangle - Area: " << rect.area() << ", Perimeter: " << rect.perimeter() << std::endl;
    cout << "Triangle - Area: " << tri.area() << ", Perimeter: " << tri.perimeter() << std::endl;
    return 0;
}
