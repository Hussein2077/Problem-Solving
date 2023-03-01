#include <iostream>

using namespace std;

int main()
{
int row,col;
cin>>row>>col;
char arr[101][101];
for(int i=1;i<=row;i++){
    for(int z=1;z<=col;z++)
    {
        cin>>arr[i][z];
    }
}
int r,c;
cin>>r>>c;
if (arr[r][c-1]!='.'&&
    arr[r][c+1]!='.'&&
    arr[r-1][c]!='.'&&
    arr[r+1][c]!='.'&&
    arr[r-1][c+1]!='.'&&
    arr[r-1][c-1]!='.'&&
    arr[r+1][c-1]!='.'&&
    arr[r+1][c+1]!='.'
    )
{
    cout<<"yes";

}else {cout<<"no";}




    return 0;
}
