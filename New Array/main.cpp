#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
const int s=10001;
void narr (int arr1[s],int arr2[s],int siz)
{
    for (int i=0;i<siz;i++)
    {
        cout<<arr2[i]<<" ";
    }
    for (int i=0;i<siz;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
int main()
{
init();
int siz;
cin>>siz;
int arr1[siz];
int arr2[siz];
for (int i=0;i<siz;i++)
    {
cin>>arr1[i];
    }
    for (int i=0;i<siz;i++)
    {
        cin>>arr2[i];
    }
narr(arr1,arr2,siz);
    return 0;
}
