#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
    double a,b;
    cin>>a>>b;
    double x=100-a;//80
    x/=100;//.80
    double res =b/x;//80/.80
    cout<<fixed<<setprecision(2)<<res;

    return 0;
}
