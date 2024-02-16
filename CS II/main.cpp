#include <iostream>
using namespace std;



class Queue{
    
private:
    int front, rear, *arr;
    int elements, max_elements;

public:
    Queue(int n)  {
        front = -1;
        rear = -1;
        arr = new int[n];
        elements = 0;
        max_elements = n;
    }
    bool isFull(){
        return(elements==max_elements);
    }
    bool isEmpty(){
        return(elements==0);
    }
    void push(int n);
    int pop();
    void display_queue();
    void display_array(){
        for(int i=0; i<max_elements; i++)
            cout<<arr[i]<<' ';
        cout<<endl;
    
    }
    
    
};


void Queue::push(int n) {
    if(isFull())
        cout<<"Error, Queue is Full"<<endl;
    else if(isEmpty())
    {
        front = 0;
        rear = 0;
        arr[rear]=n;
        elements++;
    }
    else
    {
        rear = (rear+1)%max_elements;
        arr[rear]= n;
        elements++;
        
    }
}
int Queue::pop(){
    if(isEmpty())
        return -1;
    else
    {
        int pop = front;
        front = (front+1)%max_elements;
        elements--;
        return arr[pop];
        
        
    }
    
}

void Queue::display_queue(){
    for(int i = 0;i<max_elements; i++)
        cout<<pop()<<' ';
    cout<<endl;
}

int main(){
    
    Queue x(5);
    
    x.push(2);
    x.push(3);
    x.push(4);
    x.push(5);
    x.pop();
    x.pop();
    x.push(6);
    x.push(7);
    x.push(8);
    x.pop();
    x.pop();
    x.push(9);
    x.display_queue();
    
    
    
    
    
    return 0;
}
