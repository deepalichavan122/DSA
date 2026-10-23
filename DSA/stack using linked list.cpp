# include<iostream>
using namespace std;
# define MAX 5
class stack
{
    private:
    int a[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    int empty()
    {
        if(top==-1)
        return(1);
        else
        return(0);
    }
    int full()
    {
        if(top==MAX-1)
        return(1);
        else
        return(0);
    }
    void push(int x)
    {
        top++;
        a[top]=x;
    }
    int pop()
    {
        int x=a[top];
        top--;
        return(x);
    }
    int peek()
    {
        return(a[top]);
    }
    void display()
    {
        for (int i=top; i>=0; i--)
        cout<<a[i]<<endl;
    }
};
int main()
{
    int x;
    stack s;
    if(!s.full())s.push(10);
    if(!s.full())s.push(20);
    if(!s.full())s.push(30);
    if(!s.full())s.push(40);
    if(!s.full())s.push(50);
    if(!s.full())s.push(60);
    cout<<"stack element:";
    s.display();
    if(!s.empty())
    {
        x=s.pop();
        cout<<endl<<"removed:"<<x;
    }
    cout<<endl<<"stack after pop:";
    s.display();
    if(!s.empty())
    {
        x=s.peek();
        cout<<endl<<"top element is:"<<x;
    }
    return 0;
}
/*
PS D:\pratiksha> cd "d:\pratiksha\" ; if ($?) { g++ stack.cpp -o stack } ; if ($?) { .\stack }
stack element:50
40
30
20
10

removed:50
stack after pop:40
30
20
10

top element is:40
*/