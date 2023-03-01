#include <iostream>

using namespace std;

int main()
{
string value;
cin>>value;
string my="hello";
int i=0;
int z=0;
while (true)
{
    if (i==value.size()||z==my.size())
    {
        break;
    }
    if (value[i]==my[z])
    {
        z++;
    }
    i++;

}
if (z==5)
{
    cout<<"YES"<<endl;

}else {cout <<"NO"<<endl;}

    return 0;
}
