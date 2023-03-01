#include<string>
#include <iostream>
using namespace std;
long long removez (long long a)
{
   string s=to_string(a);
   string s2;
	int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]!='0')
            s2+=s[i];
    }
    return stoll (s2);
}
int main()
{
    long long a,b,r2;
    cin >>a>>b;
long long r1=a+b;
    long long newa=removez(a);
    long long newb=removez(b);
    r2 =removez(r1);
    if ((newa+newb)==r2){
    cout<<"YES";
    }
    else
    {
             cout<<"NO";
    }

    return 0;
}
