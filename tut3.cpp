#include<iostream>
using namespace std;
int main()
{
   int arr[]={20,30,40,50};
     int array[4];
     array[0] = 1000;
     array[1] = 2000;
     array[2] = 3000;
     array[3] = 4000;
     cout<<"marks "<<endl;
     arr[1]=10;
     cout<<" the value of 0 is "<<arr[0]<<endl;
     cout<<" the value of 1 is "<<arr[1]<<endl;
     cout<<" the value of 2 is "<<arr[2]<<endl;
     cout<<" the value of 3 is "<<arr[3]<<endl;
     
     cout<<"the valuse of array"<<endl;
     array[2]=50;
     cout<<" the value of array 0 is "<<array[0]<<endl;
     cout<<" the value of array 1 is "<<array[1]<<endl;
     cout<<" the value of array 2 is "<<array[2]<<endl;
     cout<<" the value of array 3 is "<<array[3]<<endl;

    //  for (int  i = 0; i < 4; i++)
    //  {
    //     cout<<"the value of "<<i<<" is "<<arr[i]<<endl;
    //  }
    //  int i=0;
    //  while (i<4)
    //  {
    //     cout<<"the value of "<<i<<" is "<<arr[i]<<endl;
    //     i++;
    //  }
     int i=0;
     do
     {
        cout<<"the value of "<<i<<" is "<<arr[i]<<endl;
       i++;
     } while (i<4);
     
     
    return 0;
}