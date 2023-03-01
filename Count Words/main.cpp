#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
string sen,res;
getline (cin,sen);
int counter=0;
for(int i=0;i<sen.size();i++)
{
    if (sen[i]!=32&&sen[i]!='!'&&sen[i]!='.'&&sen[i]!='?'&&sen[i]!=',')
    {
        res+=sen[i];
    }
     if ((sen[i]==32||sen[i]=='!'||sen[i]=='.'||sen[i]=='?'||sen[i]==','||i==sen.size()-1)&&res.size()!=0)
    {
       counter++;
       res="";
    }
}
cout<<counter<<endl;




    return 0;
}
