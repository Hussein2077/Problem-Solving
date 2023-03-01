#include <iostream>

using namespace std;

int main()
{
int lin;
cin>>lin;
int space=lin - 1;

 for (int i=1 ;i<=lin;i++)
 {
     for (int i=1 ;i<=space;i++)
     {
        cout<<" ";
     }

     for (int a=1 ;a<i*2;i++)
     {
     cout<<"*";

     }
     cout<<endl;
     space--;
 }




    return 0;
}
