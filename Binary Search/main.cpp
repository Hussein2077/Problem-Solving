#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int binary (int arr[],int l,int r,int s){
while(l<=r){
int mid=l+(r-l)/2;
if (arr[mid]==s)
{
    return mid;
}
else if(arr[mid]<s)
{
    l=mid+1;
}else{r=mid-1;}
}
return -1;
}
int main()
{
init();
int siz,nums;
cin>>siz>>nums;
int arr[siz];
for (int i=0;i<siz;i++){
    cin>>arr[i];
}
sort(arr,arr+siz);
while(nums--){
    int s;
    cin>>s;
    int a = binary(arr,0,siz-1,s);
    if(a==-1){cout<<"not found"<<endl;}
    else {cout<<"found"<<endl;}
}


    return 0;
}
