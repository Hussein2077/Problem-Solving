#include <iostream>

using namespace std;

int main()
{

signed long long a,b,c,d;
int f=0;
cin>>a>>b>>c>>d;
if( a-(b+c)==d||(a+b)-c==d||
   a+(b*c)==d||(a*b)+c==d||
   a-(b*c)==d||(a*b)-c==d||
   )

{f=1;
}
if(f==1){
        cout<< "YES";

}else {cout<< "NO";}
    return 0;
}
