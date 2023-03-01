#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
long long n,z;
cin>>n;
long long arr [n][n];
for (int i=0;i<n;i++)
{
    for(int z=0;z<n;z++)
        cin>>arr[i][z];
}
int sum1=0,sum2=0;
for (int i=0;i<n;i++)
{
    for(int z=0;z<n;z++)
    {
 if (i==z)
 {
     sum1+=arr[i][z];
 }
 if(n-1-z==i)
 {
     sum2+=arr[i][z];
 }
    }
}
cout<<abs(sum1-sum2);






    return 0;
}
