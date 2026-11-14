#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex (float r, float i)
    {
        real=r;
        imag=i;
    }
    ~ complex()
    {

    }
    void display(void)
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
        
    }
    complex add(complex c)
    {
        float r=real+c.real;
        float i=imag+c.imag;
        return complex(r,i);
    }
    complex subtract(complex c)
    {
        float r=real-c.real;
        float i=imag-c.imag;
        return complex(r,i);
    }
    };
int main()
    {
        complex c1(2.0,3.0);
        cout<<"complex no. is"<<endl;
        c1.display();
        complex c2(5.0,7.0);
        cout<<"complex no. is"<<endl;
        c2.display();
        complex sum=c1.add(c2);
        cout<<"add no. is"<<endl;
        sum.display();
        complex subtract=c1.subtract(c2);
        cout<<"subtraction no. is"<<endl;
        subtract.display();
        return(0);
    }
//output
complex no. is
2+3i
complex no. is
5+7i
add no. is
7+10i
subtraction no. is
-3+-4i
