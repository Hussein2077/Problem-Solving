#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
     init();
long long n;
cin >>n;
int arr[n];
for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
int res=0;
for (int i=0;i<n;i++)
{
    int counter=0;
    if (arr[i]%2!=0)
{
    cout<<0<<endl;
    return 0;
}
while (arr[i] % 2 == 0)
        {
			counter++;
			arr[i] /=2;
		}
		if(i == 0 || counter < res){
			res = counter;
		}


}
cout<<res<<endl;

    return 0;
}
