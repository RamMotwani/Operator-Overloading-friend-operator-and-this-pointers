#include<iostream>
using namespace std;
class integer
{
    int n;
public:
    void setvalue(int x)
    {
        n=x;
    }
    void showdata()
    {
        cout<<n<<endl;
    }
    void operator!()
    {
        if(n==0)
        {
           n=1;
        }
        else if(n>=1)
        {
            n=0;
        }
    }

};
int main()
{
    integer i1;
    i1.setvalue(0);
    !i1;
    i1.showdata();
    return 0;
}
