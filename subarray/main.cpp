#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main(){
    init();
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        int maxnum=-100001;
        for(int j=i;j<n;j++){
            cout<<max(maxnum,arr[j])<<" ";
            maxnum=max(maxnum,arr[j]);
        }
    }
    cout<<'\n';
    }


}
