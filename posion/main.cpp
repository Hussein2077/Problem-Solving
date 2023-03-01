#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
    init();
    long long n,pos=0;

    cin>>n;
 long long arr[n];
    for (int i=1;i<=n;i++)
    {

        cin>>arr[i];
                    pos=i;

if(arr[i]<=10)
        {

            cout<<"A["<<pos-1<<"] = "<<arr[i]<<endl;

        }

    }
pos=0;
    return 0;
}
