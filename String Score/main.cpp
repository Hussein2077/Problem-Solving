#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
int siz ;
cin>>siz;
string v;
cin>>v;
char c;
int score=0;
for (int i=0;i<v.size();i++)
{
    c =v[i];
    switch(c){
case 'V':
    score+=5;
    break;
case 'W':
    score+=2;
    break;
case 'Z':
    if (i!=v.size()-1){
    if (v[i+1]=='W')
    {
        score/=2;
v[i+1]='0';
    }else if (v[i+1]=='V')
    {
        score/=5;
        v[i+1]='0';
    }
    }
    break;
case 'Y':
    if (i!=v.size()-1){
    v.push_back(v[i+1]);
    v[i+1]='0';
    }break;
case 'X':
    if (i!=v.size()-1){
    v[i+1]='0';
}    break;
    }



}cout<<score<<endl;



















return 0;
}
