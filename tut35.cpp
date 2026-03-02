#include<iostream>
#include<fstream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
string filename;
int line_number;
cout<<"file: ";
getline(cin, filename);
 
 cout<<"line: ";
 cin>>line_number;
  
  fstream read_file;
  read_file.open(filename);

  if(read_file.fail())
  {
    cout<<" error opening file "<<endl;
    return 1;
  }

  vector<string> lines;
     string line;
     while (getline(read_file,line))
       {
        lines.push_back(line);
        read_file.close();
       }
    
    if(line_number > lines.size())
     {
        cout<<" line "<<line_number;
        cout<<" not in file "<<endl; 

        cout<<" file has "<<line.size();
        cout<<" lines "<<endl;

        return 1;
     }
     ofstream write_file;
     write_file.open(filename);
     
  if(write_file.fail())
  {
    cout<<" error opening file "<<endl;
    return 1;
  }
  line_number--;
  for (int i = 0; i < line.size(); i++)
  {
    if(i!= line_number)
    {
        write_file<<lines[i]<<endl;
    }
  }
  write_file.close();
    return 0;
}