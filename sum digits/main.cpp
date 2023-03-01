#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
int n;
cin>>n;
string v;
cin>>v;
long long sum=0;
for(int i=0;i<v.size();i++)
{
        sum+=v[i]-'0';
}
cout<<sum<<endl;

    return 0;
}
