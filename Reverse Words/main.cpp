#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
string v;
int flag=0;
while (cin>>v){
    reverse(v.begin(),v.end());
    if (flag)
    {
        cout<<" ";
    }
    flag=1;
    cout<<v;


}



    return 0;
}
