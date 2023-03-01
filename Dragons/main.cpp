#include <iostream>

using namespace std;

int main()
{
   int siz1,siz2;
   cin>>siz1>>siz2;
 int arr1[siz1];
   int arr2[siz2];
   for(int i=0;i<siz1;i++)
   {
       cin>>arr1[i];
   }
   for(int i=0;i<siz2;i++)
   {
       cin>>arr2[i];
   }
int z=0;
int c=0;
for(int i=0;i<siz1;i++){
    if(arr1[i]==arr2[z])
    { c++;
        z++;
    }
    }
    if(c==siz2){
        cout<<"YES";
    }else {cout<<"NO";}

}
