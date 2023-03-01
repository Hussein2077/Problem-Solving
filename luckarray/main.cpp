    #include <bits/stdc++.h>
    using namespace std;
    void init(){
        cin.tie(0);
        cin.sync_with_stdio(0);
    }
    int main()
    {
        init();
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mini=arr[0];
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if (mini==arr[i])
        {
            counter++;
        }
        if (mini>arr[i])
        {
            mini=arr[i];
            counter=1;
        }
    }
    if (counter%2==0)
    {
        cout<<"Unlucky"<<endl;
    }
    else {
            cout<<"Lucky"<<endl;
    }
        return 0;
    }
