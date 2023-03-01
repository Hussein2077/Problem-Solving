#include <iostream>

using namespace std;

int main()
{
 string a;
 long long sum=0 ;
 cin>>a;
 for(int i=0;i<a.size();i++)
 {
sum+=a[i]-'0';
 }
     cout <<sum;







    return 0;
}
