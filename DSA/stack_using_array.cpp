#include<iostream>
using namespace std;
#define MAX 5
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
        for(int i=top;i>=0;i--)
        cout<<a[i]<<endl;
    }
};
int main()
{
    stack s;
    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        s.push(10);
        cout<<"stack contents after a push operation"<<endl;
    }
    s.display();

    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        s.push(20);
        cout<<"stack contents after a push operation"<<endl;
    }
    s.display();

    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        s.push(30);
        cout<<"stack contents after a push operation"<<endl;
    }
    s.display();

    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        s.push(40);
        cout<<"stack contents after a push operation"<<endl;
    }
    s.display();

    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        s.push(50);
        cout<<"stack contents after a push operation"<<endl;
    }
    s.display();

    if(s.full())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        s.push(60);
        cout<<"stack contents after a push operation"<<endl;
    }
    s.display();
    
    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"popoed out element is"<<s.pop();
    }
    cout<<"stack contents after opo operation:"<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"popoed out element is"<<s.pop();
    }
    cout<<"stack contents after opo operation:"<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"popoed out element is"<<s.pop();
    }
    cout<<"stack contents after opo operation:"<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"popoed out element is"<<s.pop();
    }
    cout<<"stack contents after opo operation:"<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"popoed out element is"<<s.pop();
    }
    cout<<"stack contents after opo operation:"<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"popoed out element is"<<s.pop();
    }
    cout<<"stack contents after opo operation:"<<endl;
    s.display();
    return(0);

   
}

//output


/*PS D:\Dipali>  > cd "d:\Dipali\" ; if ($?) { g++ stack_using_array.cpp -o stack_using_array } ; if ($?) { .\stack_using_array }
stack contents after a push operation
10
stack contents after a push operation
20
10
stack contents after a push operation
30
20
10
stack contents after a push operation
40
30
20
10
stack contents after a push operation
50
40
30
20
10
stack is full
50
40
30
20
10
popoed out element is50stack contents after opo operation:
40
30
20
10
popoed out element is40stack contents after opo operation:
30
20
10
popoed out element is30stack contents after opo operation:
20
10
popoed out element is20stack contents after opo operation:
10
popoed out element is10stack contents after opo operation:
stack is empty
stack contents after opo operation:*/
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty \n";
            return;
        }
        Node* temp = top;
        cout << "Current Stack (Top -> Bottom): ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL \n";

        
        st.display();

    cout << "Top element is: " << st.peek() << "\n";

    st.pop();
    st.display();