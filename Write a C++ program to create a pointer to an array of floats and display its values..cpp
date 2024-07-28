#include <iostream>

int main() {
    float arr[] = {3.14f, 2.718f, 1.414f, 0.577f, 2.302f};  
    float* ptr = arr;                                      

    
    std::cout << "Values of array using array notation:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    
    std::cout << "\nValues of array using pointer notation:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "*(ptr + " << i << ") = " << *(ptr + i) << std::endl;
    }

    return 0;
}

