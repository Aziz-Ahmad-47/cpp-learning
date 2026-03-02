#include<iostream>
using namespace std;
int intress(int actual_money, float intress_money= 1.04)
{
    return (actual_money * intress_money);
}
int main()
{
    int a, b;
    int money = 10000;
cout<<" if you have money = "<<money<< " then after intress the money will become "<< intress(money)<<endl;
cout<<"for VIP if you have money = "<<money<< " then after intress the money will become "<< intress(money,1.1);

    return 0;
}