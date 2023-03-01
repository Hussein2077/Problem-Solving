#include <iostream>

using namespace std;

int main()
{

string v;
cin>>v;
int size =v.size();
for(int i=0;i<size ;i++)
{
    if (v[i]=='E'&&v[i+1]=='G'&&v[i+2]=='Y'&&
        v[i+3]=='P'&&v[i+4]=='T')

    {
        i+=4;
        cout<<" ";

    }else {cout<<v[i];}
}












    return 0;
}
