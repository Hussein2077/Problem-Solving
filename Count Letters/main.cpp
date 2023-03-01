#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
string a;
cin>>a;
sort(a.begin(),a.end());
int size =a.size();
for (int i=0;i<size;i++)
{
    char c=a[i];
    int counter =1;
    while (a[i]==a[++i])
    {
        counter++;
    }
    i--;
    cout<<c<<" : "<<counter<<endl;


}




    return 0;
}
