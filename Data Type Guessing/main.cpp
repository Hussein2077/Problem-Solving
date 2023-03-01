#include <iostream>

using namespace std;

int main()
{
     double n,k,a;
     double res;
    cin>>n>>k>>a;
    res=(n*k)/a;
    long long myres=res;
        double myres1=res-myres;
        if(myres1>0){cout<<"double";return 0;}
        if(res<=2147483647 )
        {
            cout<<"int";
        }else {cout<<"long long";}

    return 0;
}
