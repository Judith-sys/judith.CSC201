#include <iostream>



int sum(int a, int b) {
    return a + b;
}


int square(int n) {
    return n * n;
}

void printSum(int a, int b) {
    int result = a + b;
    std::cout << "The result of printing the sum (" << a << " + " << b << ") is: " << result << std::endl;
}

inline int triple(int n) {
    return n * 3;
}


int main() {
    std::cout << "--- Function Demonstrations ---" << std::endl;
    
    // 1. Demonstrate function 'sum' with user input
    int user_num_1, user_num_2;
    std::cout << "\n** 1. Test Function 'sum' **" << std::endl;
    
    std::cout << "Enter the first integer for sum(): ";
    
    std::cin >> user_num_1; 
    
    std::cout << "Enter the second integer for sum(): ";
    std::cin >> user_num_2;
    
    int total = sum(user_num_1, user_num_2); 
    std::cout << "Result of sum(" << user_num_1 << ", " << user_num_2 << ") is: " << total << std::endl;
    
    // 2. Demonstrate function 'square'
    int num_to_square = 6;
    int squared_result = square(num_to_square);
    std::cout << "\n2. square(" << num_to_square << ") returns: " << squared_result << std::endl;

    // 3. Demonstrate function 'printSum'
    std::cout << "\n3. printSum calls (output below):" << std::endl;
    printSum(25, 10);
    printSum(40, -5);

    // 4. Demonstrate function 'triple'
    int num_to_triple_1 = 12;
    int num_to_triple_2 = 5;
    int tripled_1 = triple(num_to_triple_1); 
    int tripled_2 = triple(num_to_triple_2);
    std::cout << "\n4. triple(" << num_to_triple_1 << ") returns: " << tripled_1 << std::endl;
    std::cout << "   triple(" << num_to_triple_2 << ") returns: " << tripled_2 << std::endl;
    
    return 0;
}