#include <iostream>
using namespace std;

//Node Class
class Node{
public:
    int data;
    Node* next;

    //constructor
    Node(){
        data = 0;
        next = NULL;
    }

};

//Stack Class
class Stack{

Node* top;

public:
    //Constructor
    Stack(){
        top = NULL;
    }

    bool isEmpty(){
        if(top == NULL){
            return true;
        }else{
            return false;
        }
    }

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
