#include <iostream>

using namespace std;

int main()
{
int a,b,d;
cin>>a;
b=a%10;
d=a/10;
if(b%d==0||d%b==0)
{
    cout<<"YES";

}
else {cout<<"NO";}

    return 0;
}
