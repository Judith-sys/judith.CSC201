#include <iostream>
#include <iomanip>
#include <cmath>

double calculate_f_n(int n) {
    double sum_of_series = 0.0;

    for (int k = 1; k <= n; ++k) {
        sum_of_series += 1.0 / ((double)k * k);
    }

    return 6.0 * sum_of_series;
}

int main() {
    std::cout << "--- Pi Approximation Series f(n) ---" << std::endl;
    
    std::cout << std::fixed << std::setprecision(4);
    
    std::cout << " n" << std::setw(10) << "f(n)" << std::endl;
    std::cout << "---" << std::setw(10) << "------" << std::endl;

    for (int n_val = 2; n_val <= 20; n_val += 2) {
        double result = calculate_f_n(n_val);

        std::cout << std::setw(3) << n_val << std::setw(10) << result << std::endl;
    }
    
    std::cout << "------------------------------------" << std::endl;

    return 0;
}