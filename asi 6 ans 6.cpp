#include<iostream>
using namespace std;
class complax
{
    int real,imag;
public:
    complax()
    {
        real=0;
        imag=0;
    }
    void setdata(int x,int y)
    {
        real=x;
        imag=y;
    }
    void showdata()
    {
        cout<<"Real = "<<real<<" Imaginary = "<<imag<<endl;
    }
    complax operator=(complax c)
    {
        real=c.real;
        imag=c.imag;
        return c;

    }
};
int main()
{
    complax c1,c2,c3;
    c1.setdata(5,1);
    c2.setdata(2,3);
    c3=c1=c2;
    c2.setdata(1,1);
    c1.showdata();
    c3.showdata();
}
