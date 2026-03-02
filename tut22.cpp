#include <iostream>
using namespace std;
// int MAX = 2;
class student
{
    string name[3];
    int rollno[3];

public:
    void student_data()
    {
        int i, j;
        for (i = 0; i <= 2; i++)
        {
            cout << "enter student name " << endl;
            cin >> name[i];
            cout << "enter student rollno " << endl;
            cin >> rollno[i];
        }
        cout << endl;
        for (j = 0; j <= i; j++)
        {
            cout << " the names of the student is " << name[j] << " & roll no is " << rollno[j] << endl;
        }
    }
};

int main()
{
    student sd;
    sd.student_data();
    // sd.names();
    // sd.rollnos();
    return 0;
    }