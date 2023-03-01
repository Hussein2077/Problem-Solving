#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
int siz,q;
cin>>siz>>q;
string a;
cin>>a;
int start,en;
while (q--)
{
    string qu;
    cin >>qu;
    if(qu =="pop_back")
    {
         a.pop_back ();
    }
    else if(qu=="front")
    {
       cout<< a.front()<<endl;
    }
    else if(qu=="back")
    {
        cout<< a.back ()<<endl;
    }else if(qu=="sort")
    {
        cin>>start>>en;
        sort(a.begin()+min(start,en)-1,a.begin()+max(start,en));
    }else if(qu=="reverse")
    {
        cin>>start>>en;
        reverse(a.begin()+min(start,en)-1,a.begin()+max(start,en));
    }else if(qu=="print")
    {
     int pos;
     cin>>pos;
     cout<<a[pos-1]<<endl;

    }else if(qu=="substr")
    {
       cin>>start>>en;
       for(int i=min(start,en)-1;i<=max(start,en)-1;i++)
       {
           cout<<a[i];
       }
       cout<<endl;
    }
    else
    {
        char c;
        cin >>c;
         a.push_back(c) ;
    }





}



    return 0;
}
