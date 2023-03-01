#include <iostream>
#include <algorithm>
using namespace std;

int main()
{


    int c,j;

    int arr[100000];
    int n= sizeof (arr)/sizeof(arr[0]) ;
    cin>>n;

    for(int h=0;h<=n;h++)
{
    cin>>arr[h];
}

int minind;
                for(int i=0;i<n-1;i++)
                    {
                        minind=i;

                         for (int j=i+1;j<n;j++)
                            {
                                if(arr[j]<arr[minind])
                                {
                                    minind=j;
                                    swap(arr[minind],arr[i]);
                                }


                            }


                    }
                       cout<<(arr,n);





    return 0;
}
