#include <iostream>
#include <cmath> 
using namespace std;
class Shape {
public:
    virtual double area() = 0; 
    virtual double perimeter() = 0; 
    virtual ~Shape() {}
};
class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    double area() override {
        return width * height;
    }
    
    double perimeter() override {
        return 2 * (width + height);
    }
};
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    
    double area() override {
        double s = (side1 + side2 + side3) / 2; // Semi-perimeter
        return sqrt(s * (s - side1) * (s - side2) * (s - side3)); // Heron's formula
    }
    
    double perimeter() override {
        return side1 + side2 + side3;
    }
};

int main() {
    Shape* rect = new Rectangle(5, 3);
    Shape* tri = new Triangle(3, 4, 5);
    
    cout << "Rectangle Area: " << rect->area() << endl;
    cout << "Rectangle Perimeter: " << rect->perimeter() << endl;
    
    cout << "Triangle Area: " << tri->area() << endl;
    cout << "Triangle Perimeter: " << tri->perimeter() << endl;
    
    delete rect;
    delete tri; 

    return 0;
}

