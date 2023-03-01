#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
char ntime(int testcase,int n,char c)
{
for(int z=1;z<=testcase;z++)
{
    //cout<<endl;
    cin>>n>>c;
    for(int i=1;i<=n;i++)
    {
        cout <<c<<" ";

    }
cout<<endl;
}

}


int main()
{init();
int n;
char c;
int testcase;
cin >>testcase;
ntime(testcase,n,c);


    return 0;
}
