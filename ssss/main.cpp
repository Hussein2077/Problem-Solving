#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{//freopen("hello.in","r",stdin);

long long n, T;
    cin >> n >> T;
  long long t[n];
    for(int i = 0;i < n; i++)
     cin >>t[i];
    long long cnt = T;
    long long pos = T;
    for(int i = 1 ;i <n ;i++)
    {
        if(t[i] < pos)
        {
            cnt -= (pos - t[i]);
        }
        cnt += T;
        pos  = t[i] + T;
    }
    cout << cnt;




return 0;
}
