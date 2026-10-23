# include<iostream>
using namespace std;
void bubblesort(int a[], int n)
{
    int temp;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[20], n;
    cout<<"How many element to sort";
    cin>>n;
    cout<<"Enter"<<n<<"unsorted element";
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"sorted list is"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}

 /*
PS D:\pratiksha> cd "d:\pratiksha\" ; if ($?) { g++ bubblesort.cpp -o bubblesort } ; if ($?) { .\bubblesort }
How many element to sort 5 
Enter5unsorted element 1 3 6 8 9
sorted list is
1
3
6
8
9           
*/                              