#include <iostream>
#include <cstring>   
#include <cstdlib>   

int main() {
    std::cout << "--- Summary Exercise 1: C-String Functions ---" << std::endl;
    
    // Part 1: Concatenating Strings
    std::cout << "\n** 1. Concatenation **" << std::endl;
    char str1[50] = "Hello ";
    char str2[] = "World!";
    
    
    std::strcat(str1, str2); 
    std::cout << "strcat result (str1 + str2): " << str1 << std::endl; 
    
    char str3[50] = "Program";
    char str4[] = "ming is fun!";
    
    
    std::strncat(str3, str4, 5); 
    std::cout << "strncat result (str3 + first 5 of str4): " << str3 << std::endl; 
    
    // Comparing strings 
    std::cout << "\n** 2. Comparison (strcmp) **" << std::endl;
    char comp1[] = "apple";
    char comp2[] = "banana";
    char comp3[] = "apple";
    
    
    std::cout << "strcmp('apple', 'banana') (comp1 < comp2): " << std::strcmp(comp1, comp2) << " (Negative)" << std::endl;
    std::cout << "strcmp('apple', 'apple') (comp1 == comp3): " << std::strcmp(comp1, comp3) << " (Zero)" << std::endl;
    
    // Part 3: Conversion between Strings and Numbers
    std::cout << "\n** 3. Conversion (Strings <-> Numbers) **" << std::endl;
    

    char num_str[] = "12345";
    char float_str[] = "3.14159";
    
    int num_int = std::atoi(num_str);
    double num_float = std::atof(float_str);
    
    std::cout << "String '" << num_str << "' converted to int: " << num_int << std::endl;
    std::cout << "String '" << float_str << "' converted to double: " << num_float << std::endl;

   

    return 0;
}