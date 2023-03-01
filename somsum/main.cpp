#include <iostream>

using namespace std;

int main()
{
           int l,c=1;
           cin>>l;
           for(int i=1;i<=l;i++)
           {        if (c%4==0)
                    {
                        c++;
                        cout<<"PUM"<<endl;
                            i--;
                            continue;
                    }
               cout <<c<<" ";
                c++;
               cout <<c<<" ";
                c++;
                cout <<c<<" ";
                c++;
           }
           cout<<"PUM"<<endl;








}
