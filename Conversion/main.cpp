#include <iostream>

using namespace std;

int main()
{
string s;
cin>>s;
for (int i=0;i<s.size();i++)
{
    if(s[i]==',')
    {
        cout<<" ";
    }
    else if (s[i]>='a'&&s[i]<='z')
    {
        int a=s[i]-32;
        char z=a;
        cout <<z;
    }
    else {
        int a=s[i]+32;
        char z=a;
        cout <<z;
    }
}






    return 0;
}
