#include <iostream>
using namespace std;
class student
{
    string name[2];
    int rollno[2];

public:
    void getdata()
    {
        for (int i = 0; i <= 2; i++)
        {
            cout << " enter name " << endl;
            cin >> name[i];
            cout << " enter rollno " << endl;
            cin >> rollno[i];
        }
        cout<<endl;
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << "The name of the studetn is " << name[j] << " and roll no is " << rollno[j] << endl;
        }
    }
    }
    void display();
};
int main()
{
    student s;
    s.getdata();
    // s.display();
    return 0;
}