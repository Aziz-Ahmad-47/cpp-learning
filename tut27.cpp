#include<iostream>
#include<stdlib.h>
using namespace std;
class distance
{
    private:
    int feet;
    float inches;
    public:
    distance() : feet(0), inches(0.0)
    {
      cout<<"therer is no constractor"<<endl;
    }
    distance(int ft, float in): feet(ft), inches(in)
    {
        cout<<"Two argumetn constructor has been called\n";
    }
    void getdata()
    {
        cout<<"\n entr feet ";
        cin>>feet;
        cout<<"\n entr inches ";
        cin>>inches;
    }
    void showdist()
    {
        cout<<feet<<"'\'-"<<inches<<"'\'";
    }
};
// distance distance::add_dist(distance d2)
// {
//     distance temp;
//     temp.inches = inches + d2. inches;
//     if (temp.inches>= 12.0)
//     {
//       temp.inches-=12.0;
//       temp.feet = 1;
//     }
//     temp.feet += feet + d2.feet;
//      return temp;
// }
int main()
{
    distance d1;
    distance d2(11,12);
    distance d3(d2);
    distance d4 = d2;
    cout<<"\ndist1 = " dist1.showdist();
    cout<<"\ndist2 = " dist2.showdist();
    cout<<"\ndist3 = " dist3.showdist();
    cout<<"\ndist4 = " dist4.showdist();
    cout<<endl;
    return 0;
}