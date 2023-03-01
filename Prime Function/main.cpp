#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}


bool isPrimeNumber(int test,long long num){
  bool isPrime = true;
  int i;
int newn=sqrt(num);
if (num<=1)
{
    isPrime=false;
}
else{
  for(i = 2; i <=newn; ++i) {
      if(num%i==0) {
          isPrime=false;
          break;
      }
  }

  return isPrime;
}}



int main()
{
    init();
int testcase;
long long n;

cin >>testcase;

while(testcase--){
cin>>n;
  if (n==1)
  {
      cout<<"NO"<<endl;
      continue;
  }
  if(isPrimeNumber(testcase,n)){
      cout <<  "YES"<<endl;}
  else{
      cout <<   "NO"<<endl;
  }
}




    return 0;
}
