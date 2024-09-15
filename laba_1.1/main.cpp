#include <iostream>
#include <limits>
#include <locale> // �������� ��� ������

int main() {
    setlocale(LC_ALL, "Russian"); // ���������� ������ �� �������

    std::cout << "���: int\n";
    std::cout << "������: " << sizeof(int) << " ����\n";
    std::cout << "�������: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "��������: " << std::numeric_limits<int>::max() << "\n";
    std::cout << "������ �������������� �������� 5 + 10 = " << (5 + 10) << "\n\n";

    std::cout << "���: unsigned int\n";
    std::cout << "������: " << sizeof(unsigned int) << " ����\n";
    std::cout << "�������: " << std::numeric_limits<unsigned int>::min() << "\n";
    std::cout << "��������: " << std::numeric_limits<unsigned int>::max() << "\n";
    std::cout << "������ �������������� �������� 5 + 10 = " << (5 + 10) << "\n\n";

    std::cout << "���: float\n";
    std::cout << "������: " << sizeof(float) << " ����\n";
    std::cout << "�������: " << std::numeric_limits<float>::min() << "\n";
    std::cout << "��������: " << std::numeric_limits<float>::max() << "\n";
    std::cout << "������ �������������� �������� 4.6 + 10.5 = " << (4.6 + 10.5) << "\n\n";

    std::cout << "���: double\n";
    std::cout << "������: " << sizeof(double) << " ����\n";
    std::cout << "�������: " << std::numeric_limits<double>::min() << "\n";
    std::cout << "��������: " << std::numeric_limits<double>::max() << "\n";
    std::cout << "������ �������������� �������� 4.6 + 10.5 = " << (4.6 + 10.5) << "\n\n";

    std::cout << "���: char\n";
    std::cout << "������: " << sizeof(char) << " ����\n";
    std::cout << "�������: " << static_cast<int>(std::numeric_limits<char>::min()) << "\n";
    std::cout << "��������: " << static_cast<int>(std::numeric_limits<char>::max()) << "\n";
    std::cout << "������ �������������� �������� 'a' + '1' = " << (static_cast<char>('a') + static_cast<char>('1')) << "\n";
    std::cout << "������ �������������� �������� 'a' + 1 = " << (static_cast<char>('a') + 1) << "\n";
    std::cout << "������ �������������� �������� '10' + '5' = " << (static_cast<char>('10') + static_cast<char>('5')) << "\n\n";

    std::cout << "���: bool\n";
    std::cout << "������: " << sizeof(bool) << " ����\n";
    std::cout << "�������: " << (false ? 1 : 0) << "\n";
    std::cout << "��������: " << (true ? 1 : 0) << "\n";
    std::cout << "������ �������������� �������� true + false = " << (true + false) << "\n";

    return 0;
}
