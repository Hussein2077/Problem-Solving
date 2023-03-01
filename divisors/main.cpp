#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    long long s,n,x,y;
    string z;
    cin>>s>>n;

for(int i=1;i<=n;i++)
{
    cin>>x>>y;

    if(s>x){
        s=s+y;
z="YES";
    }
    else

    {
       z="NO";
    }

}


cout <<z;










    /*while (n--)
        {

        cin>>x>>y;
        continue;
 }
if(s>x){
        s=s+y;
        cout<<"YES";
    }
    else

    {
        cout<<"NO";
    }
*/





    return 0;
}
