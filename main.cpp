#include "arraylib.h"
#include <iostream>
int main() {
    int data[] = {1, 2, 3, 4, 5, -1, 0};             
    size_t n = sizeof(data) / sizeof(data[0]);      

    std::cout << "Sum: " << arr_sum(data, n) << "\n";
    std::cout << "Max: " << arr_max(data, n) << "\n";
    std::cout << "Min: " << arr_min(data, n) << "\n";
    std::cout << "Average: " << arr_average(data, n) << "\n";
    std::cout << "Median: " << arr_median(data, n) << "\n";

    return 0;
}
