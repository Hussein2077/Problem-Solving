#include <iostream>

using namespace std;

int main()
{
int n1,n2,max,min,counter;
cin>>counter;
while (counter--){
        cin>>n1>>n2;
    int sum =0;
  /*  if (n1<=0||n2<=0)
    {
        return 0;
            }*/
    if (n1>n2)
    {
        max=n1;
        min=n2;
    }else {
    max=n2;
    min=n1;
    }
    for (int i =min+1 ;i<=max-1;i++){
if(i%2!=0)
{
sum+=i;
}

}
cout<<sum<<"\n";



    }








    return 0;
}
