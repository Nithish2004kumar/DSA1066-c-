#include <iostream>
#include <stdexcept>
#include <string>
class MyCustomException : public std::exception {
public:
    MyCustomException(const std::string& message) : message_(message) {}
    
    virtual const char* what() const noexcept override {
        return message_.c_str();
    }

private:
    std::string message_;
};
void riskyFunction(int value) {
    if (value < 0) {
        throw MyCustomException("Negative value is not allowed.");
    } else {
        std::cout << "Value is acceptable: " << value << std::endl;
    }
}

int main() {
    int inputValue;
    std::cout << "Enter a value: ";
    std::cin >> inputValue;

    try {
        riskyFunction(inputValue);
    } catch (const MyCustomException& e) {
        std::cerr << "Caught a MyCustomException: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}

