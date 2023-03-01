#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
int n,flag=0;
cin>>n;
int arr[n];
for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
 for (int i=0;i<n;i++)
{
    if (arr[i]!=arr[n-1-i])
    {
        flag=1;
        break;
    }
}
if(flag==0)
{
    cout <<"YES"<<endl;
}
else {
        cout <<"NO"<<endl;

}
    return 0;
}
