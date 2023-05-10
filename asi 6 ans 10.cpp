#include<iostream>
using namespace std;
class Distance
{
    int feet,inches;
public:
    Distance(int x=0 , int y=0)
    {
        feet=x;
        inches=y;
    }
  void operator()(int a,int b,int c)
  {
      feet=a+c+5;
      inches=a+b+15;
  }
  void display()
  {
      cout<<"feet ="<<feet<<" inches = "<<inches<<endl;
  }
};
int main()
{
    Distance d1;
    d1(5,6,7);
    d1.display();
    return 0;




}
