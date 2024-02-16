
#include <iostream>
using namespace std;



class stack{
    
private:
    int top;
    int size;
    int *arr;
    
public:
    stack(int n){
        arr = new int[n];
        size = n;
        top = -1;
    }
    
    bool is_empty(){
        return(top==-1);
    }
    bool is_full(){
        return(top==size-1);
    }
    void push(int n){
        
        if (is_full())
            cout<<"Error, Stack is Full"<<endl;
        else
            arr[++top]=n;
    }
    int pop(){
        
        if (is_empty())
            return -1;
        else
            return arr[top--];
    }
    
    void displayStack(){
        for(int i = top; i>-1; i--)
            cout<<arr[i]<<endl;
    }
    
    
    
};



int main(){
    
    stack s(6);
    
    s.push(4);
    s.push(5);
    s.push(3);
    s.push(9);
    s.push(5);
    s.pop();
    s.push(13);
    s.push(10);
    s.push(2);
    
    s.displayStack();
    
    
    
    return 0;
}

