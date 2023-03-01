#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
const int s=1000;
void counter (int siz,int arr[s])
{int c=1;
    for(int i=1;i<siz;i++)
    {
    if (arr[i]!=arr[i-1])
    {
        c++;
    }
    }
cout <<c;
}



int main()
{
init();
int siz;
cin >>siz;
int arr[s];
for(int i=0;i<siz;i++)
{
    cin>>arr[i];
}
if(siz==0)
{
    cout<<0;
    return 0;
}
sort(arr,arr+siz);
counter(siz,arr);




    return 0;
}
