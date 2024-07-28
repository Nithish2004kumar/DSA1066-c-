#include <iostream>
#include <stdexcept>
void functionThatThrows() {
    int choice;
    std::cout << "Enter a number (1: logic_error, 2: runtime_error, 3: bad_alloc): ";
    std::cin >> choice;
    switch (choice) {
        case 1:
            throw std::logic_error("A logic_error occurred");
        case 2:
            throw std::runtime_error("A runtime_error occurred");
        case 3:
            throw std::bad_alloc();
        default:
            std::cout << "No exception thrown." << std::endl;
    }
}

int main() {
    try {
        functionThatThrows();
    } catch (const std::logic_error& e) {
        std::cerr << "Caught a logic_error: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught a runtime_error: " << e.what() << std::endl;
    } catch (const std::bad_alloc& e) {
        std::cerr << "Caught a bad_alloc: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught a standard exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Caught an unknown exception." << std::endl;
    }
    std::cout << "Program continues after handling exceptions." << std::endl;
    return 0;
}

