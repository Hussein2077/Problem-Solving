#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
while(n--){
    string a;
    cin>>a;
    int siz=a.size();
        int flag=0;
    for (int i=0;i<siz-2;i++)
    {
        if ((a[i]=='0'&&a[i+1]=='1'&&a[i+2]=='0')||(a[i]=='1'&&a[i+1]=='0'&&a[i+2]=='1'))
            {
            flag=1;
            break;
            }
    }
    if(flag==1){

        cout<<"Good"<<endl;
    }
        else {
                cout<<"Bad"<<endl;
}}




    return 0;
}
