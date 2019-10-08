#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void print_rectangle(int n,int m)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1||i==n||j==1||j==m)
            cout<<"+";
            else
            cout" ";
        }
        cout << endl;
    }
}
void print_square(int n,int m)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1||i==n||j==1||j==m)
            cout<<"+";
            else
            cout" ";
        }
        cout << endl;
    }
}
void print_triangle()
{
    int z =1;
    for(int i=0;i<7;i++)
    {
        for(int j=7;j>i;j--)
        {
            cout<<" ";
        }
        cout<<"+";
        if(i!=0)
        {
            for(int k=1;k<=z;k++)
            {
                count" ";
            }
            cout<<"+";
            z+=2;
        }
        cout<<endl;
    }
    for(int i=0;i<=z+1;i++)
    {
        cout<<"+";
    }
}
int main()
{
    int rows = 6;
    int columns = 20;
    print_rectangle(rows, columns);
    print_square(rows, rows);
    print_triangle();
    return 0;
}