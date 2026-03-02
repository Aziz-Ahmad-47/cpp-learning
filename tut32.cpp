#include<iostream>
using namespace std;
class complex
{
private:
  int a, b;
  friend complex num(complex o1,complex o2);
public:
    void sum(int x, int y)
    {
          a= x;
          b= y;
    }
    void print()
    {
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex num(complex o1, complex o2)
{
  complex o3;
  o3.sum((o1.a+o2.a),(o1.b+o2.b));
  return o3;
}
int main()
{
   complex c,c1,sum;
   c.sum(20,30);
   c.print();

   c1.sum(40,50);
   c1.print();
   sum = num(c1 ,c);
   sum.print();

    return 0;
}