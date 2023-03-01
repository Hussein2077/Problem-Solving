#include <iostream>

using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
    init();
    long long n,arr[n],pos=0;
long long i;
    cin>>n;
    for ( i=0;i<=n;i++)
    {

        cin>>arr[i];
                    pos++;

if(arr[i]<=10)
        {

            cout<<"A["<<pos-1<<"] = "<<arr[i]<<endl;

        }


    }


    /*for (i=0;i<=n;i++)
    {


    }*/


















    return 0;
}
