#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2,i,j,k;
    cout<<"Enter rows and columns of matrix 1: ";
    cin>>r1>>c1;
	cout<<"Enter rows and columns of matrix 2: ";
    cin>>r2>>c2;
	while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }
	int m[r1][c1],n[r2][c2],mult[r2][c1];
    cout<<"Enter elements of matrix 1: ";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>m[i][j];
		}
	}
    cout<<"Enter elements of matrix 2: ";
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cin>>n[i][j];
		}
	}
	for(i=0;i<r1;i++)
	{
        for(j=0;j<c2;j++)
        {
            mult[i][j]=0;
        }
	}
    for(i=0;i<r1;i++)
	{
        for(j=0;j<c2;j++)
		{
            for(k=0;k<c1;k++)
            {
                mult[i][j]+=m[i][k]*n[k][j];
            }
		}
	}
	cout<<endl<<"Multiplied (or resultant) Matrix: "<<endl;
    for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
    	{
			cout<<" "<<mult[i][j];
			if(j==c2-1)
			{
				cout<<endl;
			}
		}
    }
	return 0;
}