#include<iostream>
using namespace std;
class complex {
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    ~complex(){}
    void display(void)
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    complex operator+(complex c)
    {
        return complex(real+c.real,imag+c.imag);
    }
    complex operator-(complex c)
    {
    return complex(real-c.real,imag-c.imag);
    }
    complex operator*(complex c)
    {
        float r=real*c.real-imag*c.imag;
        float i=real*c.imag+imag*c.real;
        return complex(r,i);
    }
};
int main()
{
    complex c1(4,5),c2(2,3);
    cout<<"First complex number:";
    c1.display();
    cout<<"Second complex number:";
    c2.display();
    complex sum=c1+c2;
    cout<<"Sum is:";
    sum.display();
    complex diff=c1-c2;
    cout<<"Difference is:";
    diff.display();
    complex prod=c1*c2;
    cout<<"Product is:";
    prod.display();
    return 0;
}
