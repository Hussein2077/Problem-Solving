#include <iostream>

using namespace std;

int main()
{
int row ,col;
cin>>row>>col;
int arr[row][col];
for (int i=0;i<row;i++)
{
    for (int z=0;z<col;z++)
    {
     cin>>arr[i][z];
    }
}
int searcher,flag=0;
cin>>searcher;
 for (int i=0;i<row;i++)
{
    for (int z=0;z<col;z++)
    {
        if(arr[i][z]==searcher)
        {
            flag=1;
            break;
        }
    }
}
if(flag==1)
{
    cout<<"will not take number"<<endl;
}
else {
    cout<<"will take number"<<endl;
}



    return 0;
}
