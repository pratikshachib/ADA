//permutation generator
#include <iostream>
#include<algorithm>
using namespace std;
void display(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void findPermutations(int a[], int n)
{
    sort(a,a+n);
    cout<<"Possible permutations are:\n";
    do
    {
        display(a, n);
    } while (next_permutation(a, a + n));
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    findPermutations(a,n);
    return 0;
}
