#include <iostream>

using namespace std;

int main()
{
int n,x,b=0,c;
cin>>n;
for(c=0;c<n;c++)
{
        cin>>x;
        if (x>b)
        {
            b=x;
        }
}
cout<<b;


    return 0;
}
