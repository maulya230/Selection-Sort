#include <stdio.h>

#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,n,p,temp,min,a[30];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";
 
    for(i=0;i<n;i++)
    {
        cout<<"Enter the value at a["<<i<<"]: ";
        cin>>a[i];
    }
 
    for(i=0;i<n;i++)
    {
        min=a[i];
        
        for(j=i;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                p=j;
            }
        }
 
        temp=a[i];
        a[i]=a[p];
        a[p]=temp;
    }
 
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}
