#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int* ptr = arr;               

   
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

