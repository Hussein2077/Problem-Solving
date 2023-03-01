#include <iostream>

using namespace std;

int main()
{
        int size ;
        cin>>size;
        string v;
        cin>>v;
        char temp;
        int counter=0;
        for(int i=0;i<size ;i++)
        {
             if (i==0)
             {
                temp= v[i];
                 counter++;
             }else if  (v[i]!=temp)
                 {
             counter++;
             temp=v[i];}

        }
    cout<<counter;

     return 0;
}
