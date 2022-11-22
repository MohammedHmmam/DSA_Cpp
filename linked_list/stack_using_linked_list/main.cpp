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

    //Check if stack is empty
    bool isEmpty(){
        if(top == NULL){
            return true;
        }else{
            return false;
        }
    }

    //Push new item to the top of the stack
    void push(int item){
        if(isEmpty()){
            Node* newNode = new Node();
            newNode->data = item;
            newNode->next = NULL;
            top = newNode;
        }else{
            Node* newNode = new Node();
            newNode->data = item;
            newNode->next = top;
            top = newNode;
        }
    }

};

int main()
{

}
