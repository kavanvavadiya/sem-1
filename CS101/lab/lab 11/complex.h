#include <iostream>
#include <cmath>
using namespace std;


struct Complex
{
public:
    double real;
    double imag;

    Complex conjugate()
    {
        Complex c;
        c.imag = -imag;
        c.real = real;

        return c;
    }

    void print()
    {
        if (imag >= 0)
        {
            cout << real << " + " << imag << "i" << endl;
        }
        if (imag < 0)
        {
            cout << real << " - " << abs(imag) << "i" << endl;
        }
    }
    double modulus()
    {
        return sqrt(real * real + imag * imag);
    }
    double argument()
    {

        return atan2(imag, real);
    }
    Complex add(Complex c)
    {
        Complex cadd;

        cadd.real = real + c.real;
        cadd.imag = imag + c.imag;

        return cadd;
    }
    Complex multiply(Complex c)
    {
        Complex cmul;
        cmul.real = real * c.real - imag * c.imag;
        cmul.imag = imag * c.real + real * c.imag;
        return cmul;
    }
    double abs_angle_between(Complex c)
    {
        // cout << atan2(-1,-1) << endl;
        
        if (abs(argument() - c.argument()) > atan2(0,-1))
        {

            return (2*atan2(0,-1) - abs(argument() - c.argument()));
        }
        else
        {

            return abs(argument() - c.argument());
        }
    }
};
