#include<bits/stdc++.h>

using namespace std;
const int mysiz=10e6;
int nums[mysiz];
    long long mynums1[mysiz];
    long long mynums2[mysiz];
int main()
{
    int siz;
    cin>>siz;
    for(int i=1;i<=siz;i++){
    cin>>nums[i];
    mynums1[i]+=mynums1[i-1]+nums[i];

    }
        sort(nums+1,nums+siz+1);
for(int i=1;i<=siz;i++){
    mynums2[i]+=mynums2[i-1]+nums[i];

    }

int n;
cin>>n;
while(n--){
int type,start,en;
    cin>>type>>start>>en;
    if(type==1){
    cout<<mynums1[en]-mynums1[start-1]<<endl;

    }else {cout<<mynums2[en]-mynums2[start-1]<<endl;}
}



    return 0;
}
