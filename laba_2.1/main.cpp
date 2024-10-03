#include <iostream>
#include <cmath> // ��� ������� sin � M_PI

int main() {
    double A, B, angle_degrees, angle_radians, area;

    // ���� ������
    std::cout << "������� ����� ������� A: ";
    std::cin >> A;
    std::cout << "������� ����� ������� B: ";
    std::cin >> B;
    std::cout << "������� ���� a (� ��������): ";
    std::cin >> angle_degrees;

    // �������������� ���� � �������
    angle_radians = angle_degrees * 3.1415926535 / 180.0;

    // ������ �������
    area = 0.5 * A * B * sin(angle_radians);

    // ����� ����������
    std::cout << "������� ������������: " << area << std::endl;

    return 0;
}
