#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
string n;
getline(cin,n);
for (int i=0;i<n.size();i++)
{
    if (n[i]=='\\'){
        break;
 }
 cout<<n[i];
}




    return 0;
}
