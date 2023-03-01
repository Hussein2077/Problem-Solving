#include <iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
/*int g(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return g(a-b, b);
    return g(a, b-a);
}
*//*
bool lucky(int x)
{
    string s= to_string(x);
     for (int i =0 ; i < s.length(); i++)
    {
        if ( s[i] != '4'&& s[i] !='7' )
            return false ;
    }
    return true ;

*/
int main()
{
/*int n;
cin >>n;
for (int i=1;i<=n;i++)
    cout <<i<<endl;
*
long long n,i;
cin >>n;
for ( i=1;i<=n;i++)
    if (i%2==0)
    cout <<i<<endl;
else if (n==1)
    cout <<-1;
*

long long x,y,a,s,d,f;
cin>>x>>a>>s>>d>>f;
y=9999;
if (x==y)
    cout<<"Correct";
else if (a==y)
        cout<<"Correct";

else if (s==y)
    cout<<"Correct";
else if (d==y)
    cout<<"Correct";
else if (f==y)
    cout<<"Correct";
else cout <<"Wrong";

*/

// C++ Program to Count Positive, Zero, and Negative Numbers
// ----codescracker.com----
/*

    int n, pos=0, neg=0,even=0,odd=0,x;
cin >>n;
   /* for(i=0; i<n; i++)
        cin>>arr[n];
    for(i=0; i<n; i++)
    */
  while (n--){
    cin >>x;
        if(x>0)
            pos++;
     if (x%2==0)
                even ++;
       if (x%2!=0)
                odd ++;
       if (x<0)

            neg++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;*/
/*
    int pas,x=6;
    while(x!=0){
        cin>>pas;
        if (pas==1999)
{
    cout <<"Correct\n";
    break;

}

else cout <<"Wrong\n";
    }




/*
int n,z;
int arr [20];

cin>>n;
for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
 for(int i = 1;i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
cout <<arr[0];*

int n,x,b,c;
cin>>n;
for(c=0;c<n;c++)
{
        cin>>x;
        if (x>b)
        {
            b=x;
        }
}
cout<<b;

*

long long n=0;
cin>>n;
for (int i=1;i<=12;i++)
{
    cout <<n<<" * "<<i<<" = "<<n*i<<endl;
}
*
long long n,fac =1;
 long  long x;
  cin >>n;
   while (n--){

    cin>>x;
for (int i=1;i<=x;i++)
    {
        fac=fac*i;

    }
  cout <<fac<<endl;
fac=1;
 }
*
long long a,s=0,flag=0;
cin>>a;
s=a/2;
for (int i=2;i<=s;i++)
{
    if (a%i==0||a==1)
         {
             cout <<"NO";
             flag=1;
         break;
         }

}
if(flag==0)

    cout <<"YES";*/

/*
long long rev=0,n,v;
cin >>n;
v=n;
while(n>0)
{
    rev=(rev *10)+(n%10);
    n=n/10;

}
if (v==rev){
    cout<<v<<"\n"<<"YES\n";
}

else
 {

   cout <<rev<<endl;
    cout <<"NO";
 }
}*/
/*
int N, i, j, isPrime, n;
    cin >> N;

    // For every number between 2 to N, check
    // whether it is prime number or not

    for(i = 2; i <= N; i++){
        isPrime = 0;
        // Check whether i is prime or not
        for(j = 2; j <= i/2; j++){
             // Check If any number between 2 to i/2 divides I
             // completely If yes the i cannot be prime number
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }

        if(isPrime==0 && N!= 1)
            cout << i << " ";
    }
*/
/*
int i,j, a,b;
cin>>a;
cin>>b;
for (i=1;i<=a;i++)
{
    if (a%i==0)
    {
//             cout <<i<<endl;
    }
}

for (j=1;j<=a;j++)
{
    if (a%j==0)
    {
            // cout <<j<<endl;
    }
}


*/

/*
int a,b;
cin >>a>>b;
cout <<g(a,b);
*/


/*
    int x,y,flag =0;
      cin >> x>>y;

  for (int i = x; i <=y; i++)
  {
    if (lucky(i)==true){
        flag++;
      cout << i << " " ;}
  }
  if (flag==0)
    cout<<-1;
*/
/*
char c;
int a,x,flag=0;
cin >>c>>a;
while(a--)
{
     cin >>x;

            for (int i=0;i<x;i++)
            {
              cout <<c;


            }
cout<<endl;

}
*/
/*
    long long rev=0,n,v;
    cin >>n;
    v=n;

    while(n>0)
    {
        rev=(rev *10)+(n%10);
        n=n/10;

    }
       cout <<rev<<"";

                    }*/




char n='*';
int a,i,j;
cin>>a;

for (i=1; i<=a; i++)
{
    for (j=1; j<=i; j++)
    cout <<n<<"";
     cout <<endl;

}
*//*

    int space, rows;
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {            cout <<" ";
        }

        while(k != 2*i-1)
        {
            cout << "*";

            k++;
        }
        cout << endl;
    }
int  n,a,arr[n];
cin>>a;
for (arr[n];arr[n]<=a;arr[n]++)
{


if (a%arr[n]==0){
cout<<sizeof(arr)/sizeof (arr[0])<<endl;
cout<<arr[n];
}
}









}



















































