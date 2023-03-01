#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{init();
string url;
cin>>url;
int size=url.size();
for(int i=0;i<size;i++)
{
    if(url[i]=='?')
    {
    i++;
    for(int z=i;z<size;z++)
            {
                    if(url[z]=='=')
                    {
                        cout<<": ";
                        continue;
                    }
                    if(url[z]=='&')
                    {
                        cout<<endl;
                        continue;
                    }
                    cout<<url[z];
            }

            break;

    }




    }


}




