#include <iostream>

using namespace std;

int main()
{
int r1,r2,c1,c2,d1,d2;
cin>>r1>>r2>>c1>>c2>>d1>>d2;
int a= (r1+c1-d2)/2;
int b=r1-a;
int c=c1-a;
int d = d1-a;
if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d&&a>=1&&a<=9&&b>=1&&b<=9&&c>=1&&c<=9&&d>=1&&d<=9
   &&r2==c+d&&b+d==c2&&b+c==d2){
    cout<<a<<" "<<b<<endl;
    cout<<c<<" "<<d<<endl;
   }
else {cout<<-1;}


    return 0;
}
