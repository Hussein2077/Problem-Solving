#include <iostream>

using namespace std;

int main()
{
long long row;
cin>>row;
int val;
for(int i=0;i<row;i++){
    val=1;
    for(int z=0;z<=i;z++){
            cout<<val<<" ";
    val=val*(i-z)/(z+1);


}
    cout<<endl;
}



    return 0;
}
