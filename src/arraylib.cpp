#include "arraylib.h"
#include <algorithm>

int arr_sum(const int* arr, std::size_t n) {
    if (n == 0) return 0;
    int s = 0;
    for (std::size_t i = 0; i < n; ++i)
        s += arr[i];
    return s;
}

int arr_max(const int* arr, std::size_t n) {
    if (n == 0) return 0;
    int m = *arr;
    for (std::size_t i = 1; i < n; ++i)
        if (arr[i] > m) m = arr[i];
    return m;
}

int arr_min(const int* arr, std::size_t n) {
    if (n == 0) return 0;
    int m = *arr;
    for (std::size_t i = 1; i < n; ++i)
        if (arr[i] < m) m = arr[i];
    return m;
}

double arr_average(const int* arr, std::size_t n) {
    if (n == 0) return 0.0;
    double s = 0.0;
    for (std::size_t i = 0; i < n; ++i)
        s += arr[i];
    return s / static_cast<double>(n);
}

int arr_count_positive(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i)
        if (arr[i] > 0) ++count;
    return count;
}

int arr_count_negative(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i)
        if (arr[i] < 0) ++count;
    return count;
}

int arr_count_zero(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i)
        if (arr[i] == 0) ++count;
    return count;
}

int arr_product(const int* arr, std::size_t n) {
    if (n == 0) return 0;
    int p = 1;
    for (std::size_t i = 0; i < n; ++i)
        p *= arr[i];
    return p;
}

double arr_median(const int* arr, std::size_t n) {
    if (n == 0) return 0.0;
    int* copy = new int[n];
    for (std::size_t i = 0; i < n; ++i)
        copy[i] = arr[i];
    std::sort(copy, copy + n);
    double result;
    if (n % 2 == 1)
        result = static_cast<double>(copy[n / 2]);
    else
        result = (static_cast<double>(copy[n / 2 - 1]) + static_cast<double>(copy[n / 2])) / 2.0;
    delete copy; 
    return result;
}

