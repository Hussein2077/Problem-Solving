#include <iostream>

using namespace std;

int main()
{
long long x,y,a,b;
cin>>x>>y>>a>>b;
bool f=true;
for (int i=x;i<=y;i++)
{
    if(i==a&&b>=y)
    {
        cout<<a<<" "<<y;
        f=false;
        break;

    }
}
if(f)
    cout<<-1;

    return 0;
}
