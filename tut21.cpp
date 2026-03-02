#include<iostream>
using namespace std;

class football
{
 private:
  string name_of_player;
  int rank_number;
public:
//   void name_rak(string n, int y);
  void display();
};
 
//  void football:: name_rak(string n, int y)
//  {
//     name_of_player = n;
//     rank_number = y; 
//  }

 void football :: display()
 {
    cout<<"enter the name of player "<<endl;
    cin>>name_of_player;
    cout<<"enter the rank of player "<<endl;
    cin>>rank_number;

    cout<<" The player "<<name_of_player<< " rank is "<<rank_number;
 }
int main()
{

    football fb;
    fb.display();
    
    return 0;
}