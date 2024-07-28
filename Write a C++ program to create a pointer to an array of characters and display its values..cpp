#include <iostream>

int main() {
    char str[] = "Hello";  
    char* ptr = str;       

    for (int i = 0; str[i] != '\0'; ++i) {

    std::cout << "array notation:" << std::endl;
        std::cout << "str[" << i << "] = " << str[i] << std::endl;
    }

   
    std::cout << " pointer notation:" << std::endl;
    for (int i = 0; *(ptr + i) != '\0'; ++i) {
        std::cout << "*(ptr + " << i << ") = " << *(ptr + i) << std::endl;
    }

    return 0;
}

