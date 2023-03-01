#include <bits/stdc++.h>
using namespace std;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
const int s=100001;
void print1(int arr[s],int theShift,int siz){
	for(int i = theShift;i<siz;i++){ // i = 5   i< 5
		cout<<arr[i]<<" ";
	}
}
void print2(int arr[s],int theShift){
	for(int i = 0;i<theShift;i++){ // i = 0   i< 4    0 1 2 3
		cout<<arr[i]<<" ";
	}
}
int main()
{
init();
int siz,times;
cin>>siz>>times;
int arr[s];
for(int i=0;i<siz;i++)
{
    cin>>arr[i];
}
int sh =times %siz;
int n=siz-sh;
print1(arr,n,siz);
print2(arr,n);

    return 0;
}
