#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
init();
int test;
cin >>test;
long long num;
for (int i=0;i<test;i++)
{
    cin>>num;
    int ones=0;
    while(num>0)
    {
        if (num % 2==1)
        {
            ones++;
        }
        num/=2;
    }

long long sum =0;
for (int z=0;z<ones;z++)
{
    sum+= 1 * pow(2,z);
}
cout <<sum<<endl;
}


}
