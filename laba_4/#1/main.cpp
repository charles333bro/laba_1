#include <iostream>
using namespace std;

int main() {
    int A;
    int B;
    int C;
    cout << "enter the number A" << "\n";
    cin >> A;
    cout << "enter the number B" << "\n";
    cin >> B;
    cout << "enter the number C" << "\n";
    cin >> C;
    if (A > B && B > C)
        cout << A - B - C << "\n";
    else if (B > A && B % C == 0)
        cout << B / C + B - A << "\n";
    else
        cout << A + B + C;
    return 0;
}