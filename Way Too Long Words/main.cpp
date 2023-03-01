#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
while(n--){
string a;
cin>>a;
int  size1 =a.size();

            if (size1>10)
    {
        cout<<a[0]<<size1-2<<a[size1-1]<<endl;
    }
   else
    {
        cout<<a<<endl;
    }



}







    return 0;
}
