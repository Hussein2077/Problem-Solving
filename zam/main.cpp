#include <iostream>
using namespace std;
int findSmallestElement(int arr[], int n){
   int temp = arr[10007],pos=-1;
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
pos=i;
      }
   }
   return temp;
}
int main() {
   int n,pos=-1;
   cin>>n; int arr[n-1];
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }



   int smallest = findSmallestElement(arr, n);{
   cout<<smallest<<"\n";
   cout<<pos+1;
   }


   return 0;
}
