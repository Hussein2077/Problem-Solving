#include<bits/stdc++.h>
using namespace  std;
int main()
{
    long long n,d;
    cin>>n>>d;
    int arr[1000];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n);

               /* for(int j=0;j<n;j++)
                    {
                        if (arr[j]-arr[j]<=d||arr[j]-arr[j]<=-d)
                        {
                            z++;

                        }

                    }
cout <<z;*/

int i1 = 0, i2 = 1, ways = 0;
    while (i2 < n)
    {
        if (arr[i2] - arr[i1] <= d)
        {
            ways += (i2 - i1);
            ++i2;
        }
        else
        {
            ++i1;
        }
    }
    ways *= 2;
cout <<ways;






       return 0;
}
