#include <iostream>
#include <stdio.h>
using namespace std;

 palindrome(int arr[], int n)
{
    int flag = 0;
for (int i = 0; i <= n / 2 && n != 0; i++) {
 if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;

    }

    if (flag == 1){
        cout << "NO";
        }
    else{
        cout << "YES";
}}

int main()
{

    int c,arr[c];
    for (int i=0;i<=c;i++)
    {
        cin>>arr[i];
    }
    return 0;
}
