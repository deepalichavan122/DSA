#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        return(i);
    }
    return(-1);
}
int main()
{
    int a[20];
    int n;
    cout<<"How many elements";
    cin>>n;
    cout<<"Enter"<<n<<"elements";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter element to search";
    cin>>x;
    int loaction = linear_search(a,n,x);
    if (loaction == -1)cout<<"Element not found";
    else
    cout<<"Element found at index "<<loaction;
return(0);
}

//output

/*PS D:/Dipali> g++ linear.cpp
PS D:/Dipali> ./linear
How many elements 5
Enter5elements 1 2 8 5 3
Enter element to search 8
*/