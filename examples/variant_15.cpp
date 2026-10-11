#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int heatmap[] = {
        18, 21, 25, 29, 31,
        27, 23, 20, 17, 33,
        28, 24
    };

    const std::size_t n = sizeof(heatmap) / sizeof(heatmap[0]);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Вариант 15 — Тепловая карта\n";
    std::cout << "Количество ячеек: " << n << '\n';
    std::cout << "Сумма значений: " << arr_sum(heatmap, n) << '\n';
    std::cout << "Максимальная температура: " << arr_max(heatmap, n) << '\n';
    std::cout << "Минимальная температура: " << arr_min(heatmap, n) << '\n';
    std::cout << "Средняя температура: " << arr_average(heatmap, n) << '\n';

    int count_above_27 = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (heatmap[i] > 27) ++count_above_27;
    }
    std::cout << "Значений выше 27 градусов: " << count_above_27 << '\n';

    return 0;
}


