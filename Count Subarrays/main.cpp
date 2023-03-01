#include <iostream>

using namespace std;

int main()
{ int test ;
cin >>test;
while(test--){
    int siz;
    cin>>siz;
    int res;
    int arr [siz];
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    res=siz;
    int i=0;
    int z=0;
    while(true){
        if(z==siz-1){break;}
        if (arr[i]>arr[i+1]){
            z++;
            i=z;
            continue;
        }
        res++;
        i++;
        if(i==siz-1){z++;
        i=z;}

    }

        cout<<res<<endl;
}



















    return 0;
}
