#include <iostream>

using namespace std;

int main()
{
string z;
cin>>z;
int siz=z.size();
for(int i=0;i<siz/2;i++)
{
    if(z[i]!=z[siz-1-i])
    {
        cout<<"NO"<<endl;
        return 0;
    }

}
cout<<"YES"<<endl;




    return 0;
}
