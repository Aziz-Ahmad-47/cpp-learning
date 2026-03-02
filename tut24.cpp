#include<iostream>
using namespace std;
class counter 
{
  private:
  int count;
  public:
    counter() : count(0)
    {
     cout<<"i am counter "<<endl;
    }

};
int main()
{
   counter c1,c2,d3;
    return 0;
}