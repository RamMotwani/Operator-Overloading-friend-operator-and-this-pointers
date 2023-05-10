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
   friend istream &operator>>(istream &in,complax &c)
    {
        in>>c.real>>c.imag;
        return in;
    }
   friend ostream &operator<<(ostream &out,complax &c)
    {
        out<<c.real<<c.imag;
        return out;
    }
};
int main()
{
    complax c1;
    cin>>c1;
    cout<<c1;
}
