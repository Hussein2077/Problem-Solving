#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main(){
    init();
    int n;
    cin>>n;
    int arr[n];
    int maxindex=0,minindex=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<arr[minindex]) minindex= i;
        if(arr[i]>arr[maxindex]) maxindex=i;
    }
    //cout<<minindex<<" "<<maxindex<<'\n';
    int temp=arr[minindex];
    arr[minindex]=arr[maxindex];
    arr[maxindex]=temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
