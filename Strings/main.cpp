#include <iostream>

using namespace std;

int main()
{
string a,b;
cin>>a>>b;
int size1=a.size();
int size2=b.size();
cout<<size1<<" "<<size2<<endl;
cout<<a<<b<<endl;
 char z=a[0];
 a[0]=b[0];
 b[0]=z;
 cout<<a<<" "<<b;












    return 0;
}
