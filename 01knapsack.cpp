#include<iostream>
using namespace std;
int max(int a,int b)
{
    return (a>b)?a:b;
}
int knapSack(int W,int wt[],int val[],int n)
{
    if (n==0||W==0)
        return 0;
    if (wt[n-1]>W)
        return knapSack(W,wt,val,n-1);
    else
        return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
}
int main()
{
    int n,W;
    cout<<"Enter amount of items: ";
    cin>>n;
    int p[n],w[n];
    cout<<"Enter profits: ";
    for(int i=1;i<=n;i++)
    cin>>p[i];
    cout<<"Enter weights: ";
    for(int i=1;i<=n;i++)
    cin>>w[i];
    cout<<"Enter total weight bag can hold: ";
    cin>>W;
    cout<<"Total Profit is: "<<knapSack(W,w,p,n);
    return 0;
}