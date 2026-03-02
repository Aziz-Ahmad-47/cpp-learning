#include<iostream>
using namespace std;
class car
{
  private:
  int a, b;
  public:
   car(): a(0),b(0)
   {
    cout<<"this is a where no any constructor in it "<<endl;
   }
   ~car()
   {
    cout<<"this is a distactor  "<<endl;
   }
};
int main()
{
    car c1,c2,c3,c4;

    return 0;
}