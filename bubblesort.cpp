#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    int temp;
    for(int i =0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[20],n;
    cout<<"How many elements to sorted ";
    cin>>n;
    cout<<"Enter"<<n<<"unsorted elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"Sorted list is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

//output
How many elements to sort4
Enter4unsorted elements69 

43
87
29
Sorted list is
29
43
69
87