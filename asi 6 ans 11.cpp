#include<iostream>
using namespace std;
class Marks
{
    int mark;
public:
    Marks(int x)
    {
        mark=x;
    }
    void display()
    {
        cout<<"marks ="<<mark;
    }
    Marks* operator->()
    {
        return this;
    }
};
int main()
{
    Marks m1(95);
    m1->display();

}
