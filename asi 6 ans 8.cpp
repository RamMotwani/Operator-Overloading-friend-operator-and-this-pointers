#include<iostream>
using namespace std;
class coordinate
{
    int x,y,z;
public:
    void setvalue(int a,int b ,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void showvalue()
    {
        cout<<x<<y<<z<<endl;
    }
    coordinate operator,(coordinate c)
    {
        coordinate t;
        t.x=c.y;
        t.y=c.x;
        t.z=c.z;
        return t;
    }
};
int main()
{
    coordinate c1,c2,c3;
    c1.setvalue(5,6,7);
    c2.setvalue(8,3,1);
    c2.showvalue();
    c3=(c1,c2);
    c3.showvalue();
    return 0;

}

