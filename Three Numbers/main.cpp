#include <iostream>

using namespace std;

int main()
{
    int start,en;
    int c=0;
    cin>>start>>en;
    for(int i=0;i<=start;i++)
    {
        for(int z=0;z<=start;z++)
            {
                if(en-i-z>=0&&en-i-z<=start )
                    c++;
            }
    }

cout<<c;




    return 0;
}
