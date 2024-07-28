#include <iostream>
#include <string>
class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}
    void display() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {

    Person* personPtr = new Person("Alice", 30);
    std::cout << "Person attributes using pointer:" << std::endl;
    personPtr->display();
    delete personPtr;

    return 0;
}

