#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{init();
    int siz;
    cin>>siz;
    if(siz<26)
    {
        cout<<"NO";
            return 0;
    }
    string word ;
    cin>>word;
    for(int i=0 ;i<siz;i++)
{
    word[i]=towlower(word[i]);
}
sort(word.begin(),word.end());
int c=0;
for(int i =0;i<siz;i++)
{
    if (word[i]!=word[i+1])
    {
        c++;
    }

}
if (c==26){cout<<"YES";}
else{cout<<"NO";}
    return 0;
}
