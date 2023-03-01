#include <iostream>

using namespace std;

int main()
{
int num;
cin>>num;
int start=0,sec=1;
if (num==1)
{
    cout<<start;
}else if (num==2)
{
    cout<<start<<" "<<sec;
}
else
{
    cout<<start<<" "<<sec<<" ";
    for(int i=2;i<num;i++)
    {
        int res=start+sec;
        cout<<res<<" ";
        start=sec;
        sec=res;
    }
}






    return 0;
}
