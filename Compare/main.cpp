#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
string v1,v2;
cin>>v1>>v2;
int size1=v1.size();
int size2=v2.size();
int size0=min(size1,size2);
int flag=0;
for(int i=0;i<size0;i++)
{
    if (v1[i]<v2[i])
    {
        cout<<v1;
        flag=0;
        break;
    }
    else if (v1[i]>v2[i])
    {
        cout<<v2;
        flag=0;
        break;
    }
    else{
        flag=1;
    }
}
if (flag==1)
{
    if(size1>size2)
    {
        cout<<v2;
    }else {
    cout<<v1;
    }
}


    return 0;
}
