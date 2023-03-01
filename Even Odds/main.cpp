#include <iostream>

using namespace std;

int main()
{
long long n,p;
cin>>n>>p;
if((n+1)/2>=p)
{
    cout<<(p*2)-1;
}else {
cout<<2*(p-(n+1)/2);
}



    return 0;
}
