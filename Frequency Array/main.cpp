#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{

    init();
    int n,m,i;
cin>>n>>m;
int freq[100000]={0};

int arr[n];

for (int i=0;i<n;i++)
{
    cin>>arr[i];
    freq [arr[i]]++;
}
for (int i=0; i < n; i++){
       if (arr[i]!=arr[i+1]){
        cout<<freq[arr[i]]<<endl;
        }

}



    return 0;
}
