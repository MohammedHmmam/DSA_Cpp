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

    //display method to display stack items
    void display(){
        Node* temp = new Node();
        while(temp!= NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    //pop() Method to remove the top item in the stack and returb it
    int pop(){
        int value;
        Node* delptr = top;
        value = top->data;
        top = top->next;
        delete delptr;
        return value;
    }

    //peek() method to return the top item in the stack
    int peek(){
        return top->data;
    }


    //Create count method to return the items count
    int count(){
        int counter = 0;
        Node* temp = top;
        while(temp!= NULL){
            counter++;
            temp = temp->next;
        }
        return counter;
    }

};

int main()
{

}
