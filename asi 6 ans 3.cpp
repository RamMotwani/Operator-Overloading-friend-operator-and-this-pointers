#include<iostream>
using namespace std;
class check
{
    int index[100];
public:
    void setindex(int n,int i)
    {
        if(i>=100)
        {
            cout<<"index out of bound"<<endl;

        }
        else
        {
            index[i]=n;
        }
    }
    void operator[](int i)
    {
        if(i>=100)
        {
            cout<<"index out of bound"<<endl;

        }
        else
        {
            cout<<index[i];
        }
    }
};
int main()
{
    check c1;
    c1.setindex(5,99);
    c1[99];
}
