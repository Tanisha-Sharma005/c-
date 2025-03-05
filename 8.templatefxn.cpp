#include<iostream>
using namespace std;

template <class A>
void Swap(A &x, A &y) {
    A z;
    z = x;
    x = y;
    y = z;
}

int main() {
    char ch1, ch2;
    cout << "Enter two characters:" << endl;
    cin >> ch1 >> ch2;
    Swap(ch1, ch2);
    cout << "\nSwapped characters: " << ch1 << "\t" << ch2 << endl;

    int a, b;
    cout << "Enter two integers:" << endl;
    cin >> a >> b;
    Swap(a, b);
    cout << "\nSwapped integers: " << a << "\t" << b << endl;

    float c, d;
    cout << "Enter two floating-point numbers:" << endl;
    cin >> c >> d;
    Swap(c, d);
    cout << "\nSwapped floating-point numbers: " << c << "\t" << d << endl;

    return 0;
}
