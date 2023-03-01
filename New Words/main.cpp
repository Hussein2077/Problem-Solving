#include <iostream>

using namespace std;

int main()
{
string v;
cin>>v;
int e=0,g=0,y=0,p=0,t=0;
int size =v.size();
for (int i=0;i<size;i++)
{
    if (v[i]=='e'||v[i]=='E')
    {
        e++;
    } else if (v[i]=='g'||v[i]=='G')
    {
        g++;
    }else if (v[i]=='y'||v[i]=='Y')
    {
        y++;
    }else if (v[i]=='p'||v[i]=='P')
    {
        p++;
    }else if (v[i]=='t'||v[i]=='T')
    {
        t++;
    }



}
int min1=min(e,g);
int min2=min(y,p);
int min3=min(min1,min2);
int min4=min(min3,t);
cout<<min4<<endl;




    return 0;
}
