#include <bits/stdc++.h>

using namespace std;

class ComplexNumber
{
    int real, img;

public:
    ComplexNumber() {}

    ComplexNumber(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        cout << real << " + i" << img << endl;
    }

    ComplexNumber operator+(ComplexNumber cn)
    {
        return ComplexNumber(this->real + cn.real, this->img + cn.img);
    }
};

int main()
{
    int r, c;
    // cin >> r >> c;
    ComplexNumber cn1(10, 20);
    ComplexNumber cn2(89, 45);
    cn1.display();
    cn2.display();
    ComplexNumber an = cn1 + cn2;
    an.display();
    return 0;
}