//C++ program to cout No. of character in a given file
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    char line[200], fname[25];
    int i,len,count=0;
    cout<<"Enter file name: ";
    cin>>fname;
    ifstream fin;
    fin.open(fname,ios::in);
    if(!fin)
    {
        cout<<fname<<" File doesnot exits..."<<endl;
        exit(0);
    }
    cout<<"Content of a file: \n\n";
    while(fin.eof()==0)
    {
        fin.getline(line,sizeof(line));
        len=strlen(line);
        for(i=0;i<len;++i)
            ++count;
        cout<<line<<"\n";
    }
    fin.close();
    cout<<"\n No. of character in a file = "<<count<<endl;
    return 0;
}