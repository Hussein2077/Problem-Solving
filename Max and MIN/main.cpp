#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int mm(int n,int arr[])
{
    int maxe=arr[0];
    for(int i=0;i<n;i++)
    {
        if (arr[i]>maxe)
            maxe=arr[i];
    }
    int minie=arr[0];
    for(int i=0;i<n;i++)
    {
        if (arr[i]<minie)
            minie=arr[i];
    }
    cout<<minie<<" "<<maxe;
}






int main()
{init();
int n;
cin>>n;
int arr[n];
for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
mm(n,arr);



    return 0;
}
