#include <iostream>
using namespace std;

class Queue{
    int front, rear, que[5];

    public:

        Queue(){
            front = rear = -1;
            for(int i=0; i<5; i++)
                que[i] = 0;
        }

        bool is_empty(){
            if(front == -1 && rear == -1){
                cout << "Queue is empty" << endl;
                return true;
            }
            else{
                cout << "Queue is not empty" << endl; 
                return false;
            }
        }

        bool is_full(){
            if(rear == 4){
                cout << "Queue is full" << endl;
                return true;
            }
            else{
                cout << "Queue is not full" << endl; 
                return false;
            }
        }

        void enqueue(int val){
            if(is_full())
                return;
            else{
                rear++; 
                que[rear] = val;
            }
        }

        int dequeue(){
            if(is_empty())
                return 0;
            else{
                front++;
                int val = que[front];
                que[front] = 0;
                return val;
            }
        }

        void display(){
            for(int i=0; i<5; i++)
                cout << que[i] << " ";
            cout << endl;
        }
        
};

int main(){
    Queue  q;
    q.display();
    q.is_empty();
    q.is_full();
    q.dequeue();
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(24);
    q.enqueue(23);
    q.dequeue();
    q.dequeue();

    q.display();
    return 0;
}