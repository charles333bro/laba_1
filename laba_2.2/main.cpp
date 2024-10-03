#include <iostream>
#include <cmath> // для функции sin

int main() {
    double A, B, angle_degrees, angle_radians, area;

    // Ввод данных
    std::cout << "Введите длину стороны A: ";
    std::cin >> A;
    std::cout << "Введите длину стороны B: ";
    std::cin >> B;
    std::cout << "Введите угол a (в градусах): ";
    std::cin >> angle_degrees;

    // Преобразование угла в радианы
    angle_radians = angle_degrees * 3.1415926536 / 180.0;

    // Расчет площади
    area = 0.5 * A * B * sin(angle_radians);

    // Вывод результата
    std::cout << "Площадь треугольника: " << area << std::endl;

    return 0;
}
