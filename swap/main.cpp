#include <iostream>

using namespace std;
int swap1(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout <<a<<" "<<b;




}
int main()
{
int x,y;
cin>>x>>y;
swap1(x,y);
    return 0;
}
