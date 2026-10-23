#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int first = 0,last =n-1,mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==x)return(mid);
        else if(a[mid]<x)first=mid+1;
        else last = mid-1;
     }
     return(-1);
}
int main()
{
    int a[20];
    int n;
    cout<<"How many elements ";
    cin>>n;
    cout<<"enter"<<n<<"elements ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"enter element to be search";
    cin>>x;
    int location= binary_search(a,n,x);
    if(location == -1)cout<<"element not found ";
    else 
    cout<<"element found at index"<<location;
    return(0);
}

/output

/*PS D:\Dipali> g++ binary.cpp
PS D:\Dipali> ./binary
How many elements 5           
enter5elements 11 33 43 32 18
enter element to be search 18 
element not found *//
