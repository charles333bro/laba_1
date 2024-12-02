#include <iostream>
using namespace std;

int main() {
    int x, i;
    cout << "Enter the number x (0 < x < 10^9): ";
    cin >> x;
    cout << "Enter the bit number i to get its value: ";
    cin >> i;
    
    int bitValue = (x >> i) & 1;
    cout << "Result after installation " << i << "-ogo bita: " << bitValue << endl;

    return 0;
}