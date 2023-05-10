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
    void setdata(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    void showdata()
    {
        cout<<"real = "<<real<<" imaginary = "<<imag<<endl;
    }
};
int main()
{
    complax c1;
    c1.setdata(5,7);
    c1.showdata();
    return 0;

}
