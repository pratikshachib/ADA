#include<iostream>
using namespace std;
int main()
{
    int n,d,m,ans=0;
    cin>>n;
    int a[n],s[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    cin>>d>>m;
    for(int i=m;i<=n;i++)
    {
        if(s[i]-s[i-m]==d)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
return 0;
}