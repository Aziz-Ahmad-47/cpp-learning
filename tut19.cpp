#include<iostream>
#include<string.h>
using namespace std;
class binary
{
  string s;
  public:
  int get_data();
  void chak_data();
  void display();
};
  int binary :: get_data()
  {
    cout<<"enter a number "<<endl;
    cin>>s;
  }
  void binary :: chak_data()
  {
    for(int i=0; i<s.length(); i++)
   {
    if (s.at(i)!='0'&&s.at(i)!='1')
   {
    cout<<"incorrect binary number "<<endl;
    exit(0);
   }
//    else
//    {
//     cout<<s;
//    }
   }
  }
int main()
{
    binary b;
    b.get_data();
    b.chak_data();

    return 0;
}