#include <iostream>
using namespace std;
class shape
{
public:
    float length, width;
    void set_value()
    {
        cout << "\nEnter length:";
        cin >> length;
        cout << "\nEnter width:";
        cin >> width;
    }
};
class rectangle : public shape
{
public:
    float area1()
    {
        set_value();
        cout << "Area of rectangle= " << length * width;
    }
};
class triangle : public shape
{
public:
    float area2()
    {
        set_value();
        cout << "Area of triangle= " << 0.5 * length * width;
    }
};
int main()
{
    rectangle r;
    r.area1();
    triangle t;
    t.area2();
    return 0;
}