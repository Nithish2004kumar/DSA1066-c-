#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual void drive() = 0; 
    virtual ~Vehicle() {} 
};
class Car : public Vehicle {
public:
    void drive() override {
        cout << "Car is driving." << endl;
    }
};
class Truck : public Vehicle {
public:
    void drive() override {
        cout << "Truck is driving." << endl;
    }
};

int main() {
    Vehicle* vehicle1 = new Car();
    Vehicle* vehicle2 = new Truck();
    
    vehicle1->drive();
    vehicle2->drive();
    
    delete vehicle1; 
    delete vehicle2;
    return 0;
}

