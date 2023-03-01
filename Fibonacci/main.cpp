#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
/*void printFibonacciNumbers(int n)
{
    int f1 = 0, f2 = 1, i;

    if (n < 1)
        return;
    cout << f1 << " ";
    for (i = 1; i < n; i++) {
        cout << f2 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
*/
int main()
{
init();
    long long pos;
    cin>>pos;
     long long start =0,sec=1;
      if(pos==1)
      {
          cout<<start<<endl;
      }else if(pos==2)
      {
          cout<<sec<<endl;
      }
      else {
        for (int i=3;i<=pos;i++)
        {
            long long res = start +sec;
        start=sec;
        sec=res;
        }
        cout <<sec<<endl;

      }




    return 0;
}
