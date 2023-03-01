#include <iostream>

#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
    init();
    int n,i;
    cin >>n;
    int arr1[n];
    int arr2[n];
for (i=0;i<n;i++)
{
    cin>>arr1[i];
}
sort(arr1,arr1+n);
for (i=0;i<n;i++)
{
    cin>>arr2[i];
}
sort(arr2,arr2+n);
int flag=0;
for(i=0;i<n;i++){
    if (arr1[i]!=arr2[i])
    {
        flag=1;

    }


}
if (flag==0)
{
    cout<<"yes"<<endl;
}
else
{
    cout <<"no"<<endl;
}





    return 0;
}
