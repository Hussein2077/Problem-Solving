 #include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
int test,result=0,flag=1,mini;
cin>>test;
while(test--){
    int siz;
    cin>>siz;
    int arr[siz];
    for (int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    for(int z=1;z<=siz;z++)
    {
        for (int x=z+1;x<=siz;x++)
        {


            result=(arr[z-1]+arr[x-1])+(x-z);
        if(flag==0&&mini>result)
        {
            mini=result;
        }
        if(flag)
        {
            mini=result;
            flag=0;
        }
        result=0;
        }
    }
    flag=1;
    cout<<mini<<endl;
}



    return 0;
}
