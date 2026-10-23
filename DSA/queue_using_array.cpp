#include<iostream>
using namespace std;
#define MAX 5
class queue
{
    private:
    int a[MAX];
    int front;
    int rear;

    public:
    queue()
    {
        front=-1;
        rear=-1;
    }
    int empty()
    {
        if(front==-1 && rear==-1)
        return(1);
        else
        return(0);
    }
     
    int full()
    {
        if(rear==MAX-1)
        return(1);
        else
        return(0);
    }
    void enqueue(int x)
    {
        if(front==-1 && rear==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        a[rear]=x;
    }
    int dequeue()
    {
        int x=a[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;

        }
        return(x);
    }
    int peek()
    {
        return(a[front]);
    }
    void display(void)
    {
        for(int i=front; i<=rear;i++)
        cout<<"\t"<<a[i];
    }
};

int main()
{
    queue q;
    if(!q.full())
    q.enqueue(10);
    else
    {
        cout<<"Queue is FULL"<<endl;

    }
    cout<<"Queue contents after enqueue operation:"<<endl;
    q.display();

    if(!q.full())
    q.enqueue(20);
    else
    {
        cout<<"Queue is FULL"<<endl;

    }
    cout<<"Queue contents after enqueue operation:"<<endl;
    q.display();

    if(!q.full())
    q.enqueue(30);
    else
    {
        cout<<"Queue is FULL"<<endl;

    }
    cout<<"Queue contents after enqueue operation:"<<endl;
    q.display();

    if(!q.full())
    q.enqueue(40);
    else
    {
        cout<<"Queue is FULL"<<endl;

    }
    cout<<"Queue contents after enqueue operation:"<<endl;
    q.display();

    if(!q.full())
    q.enqueue(50);
    else
    {
        cout<<"Queue is FULL"<<endl;

    }
    cout<<"Queue contents after enqueue operation:"<<endl;
    q.display();

    if(!q.full())
    q.enqueue(60);
    else
    {
        cout<<"Queue is FULL"<<endl;

    }
    cout<<"Queue contents after enqueue operation:"<<endl;
    q.display();

    //Dequeue operations
    for(int i=0;i<6;i++)
    {
        if(q.empty())
        {
            cout<<"Queue is EMPTY"<<endl;
        }
        else
        {
            cout<<"Dequeued out element is"<<q.dequeue()<<endl;
        }
        cout<<"Queue contents after dequeue operation:"<<endl;

        if(!q.empty())
        q.display();
        else
        cout<<"Queue is EMPTY"<<endl;
    }
    return 0;
}


//OUTPUT

 /*/ PS D:\Dipali>> cd "d:\Dipali\" ; if ($?) { g++ queue_using_array.cpp -o queue_using_array } ; if ($?) { .\queue_using_array }
Queue contents after enqueue operation:
        10Queue contents after enqueue operation:
        10      20Queue contents after enqueue operation:
        10      20      30Queue contents after enqueue operation:
        10      20      30      40Queue contents after enqueue operation:
        10      20      30      40      50Queue is FULL
Queue contents after enqueue operation:
        10      20      30      40      50Dequeued out element is10
Queue contents after dequeue operation:
        20      30      40      50Dequeued out element is20
Queue contents after dequeue operation:
        30      40      50Dequeued out element is30
Queue contents after dequeue operation:
        40      50Dequeued out element is40
Queue contents after dequeue operation:
        50Dequeued out element is50
Queue contents after dequeue operation:
Queue is EMPTY
Queue is EMPTY
Queue contents after dequeue operation:
Queue is EMPTY*/