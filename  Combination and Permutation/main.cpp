#include <bits/stdc++.h>
using namespace std;


long long fact(long long num){
if (num>=1)
{
    return num*fact(num-1);
}else {

return 1;}

}


int main()
{
    long long num;
    long long r;
    cin>>num>>r;

cout<<fact(num)/(fact(r)*fact(num-r))<<" ";
cout<<fact(num)/(fact(num-r));




    return 0;
}
