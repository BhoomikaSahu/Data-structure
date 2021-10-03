#include <iostream>
using namespace std;

class stack{
    int top;
    int a[5];

    public:

        stack(){
            top = -1;
            for(int i=0; i<5; i++)
                a[i] = 0;
        }

        bool is_empty(){
            if(top == -1)
            {
                cout << "Stack is Empty" << endl;
                return true;
            }                
            else
            {
                cout << "Stack is not Empty" << endl;
                return false;
            }
        }
        
        bool is_full(){
            if(top == 4)
            {
                cout << "Stack is Full" << endl;
                return true;
            }                
            else
            {
                cout << "Stack is not Full" << endl;
                return false;
            }
        }

        void push(int val){
            if(is_full())
                cout << "Overflow";
            else{
                top++;
                a[top] = val;
            }
        }

        int pop(){
            if(is_empty())
                return 0;
            else{
                int value = a[top];
                a[top] = 0;
                top--;
                return value;
            }
        }

        void display(){
            for(int i=4; i>=0; i--)
            {
                cout << "[" << i << "] " << a[i] << endl; 
            }
        }
};

int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(33);
    s.push(34);
    s.push(39);
    s.display();
    s.push(345);
    s.pop();
    s.display();
    return 0;
}