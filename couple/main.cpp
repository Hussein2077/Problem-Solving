/*#include <iostream>

using namespace std;
int getPairsCount(int arr[], int n, int sum)
{
    int count = 0; // Initialize result

    // Consider all possible pairs and check their sums
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                count++;

    return count;
}
int main()
{
    long long x,sum=1;
        int arr[x];

       int n = sizeof(arr) / sizeof(arr[0]);

    cin >>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout  << getPairsCount(arr, n, sum);







    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                ans++;
            }
        }
    }
    cout <<ans;
}

