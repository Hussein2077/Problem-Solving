 #include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

double average (int n)
{
    double sum;
    for(int i=0;i<n;i++)
    {
        double va;
        cin>>va;
        sum+=va;

    }

    return sum;

}
int main()
{
int n;
cin>>n;
cout<<setprecision(8)<<average(n)/n;
   return 0;
}
