//tower of hanoi using recursion
#include<iostream>
using namespace std;
void toh(int n,char Sour,char Aux,char Des)
{
    if (n == 1) 
    {
        cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
        return;
    }
    toh(n-1,Sour,Des,Aux);
    cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
    toh(n-1,Aux,Sour,Des);
}
int main()
{
    int n;
    cout<<"Enter no. of disks:";
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}
