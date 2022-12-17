#include <iostream>

using namespace std;

//Create Node class
class Node{
public:
    int data;
    Node* next;
    Node(){
        data = 0;
        next = NULL;
    }
};

//Create Queue Class
class Queue{
public:
    Node* qFront;
    Node* rear;
    Queue(){
        qFront = rear = NULL;
    }

    //Create isEmpty MEthod to check if queue is empty
    bool isEmpty(){
        if(qFront == NULL)
            return true;
        else
            return false;
    }

    //Create enqueue Method to insert new item in queue
    void enqueue(int item){
        Node* newNode = new Node();
        newNode->data = item;
        //if no item in queue
        if(isEmpty()){
            qFront = rear = newNode;

        }else{
            rear->next = newNode;
            rear = newNode;
        }
    }

    //Create display method to display queue items
    void display(){
        Node* temp = qFront;
        while(temp != NULL){
            cout << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }

    //Dequeue items from the End of queue
    int dequeue(){
        int delValue = -1;
        if(isEmpty()){
            cout << "The Queue is Empty\n";
        }else if(qFront == rear){
            delValue = qFront->data;
            delete qFront;
            qFront = rear = NULL;
        }else{
            Node* delPtr = qFront;
            qFront = qFront->next;
            delValue = delPtr->data;
            delete delPtr;
        }
        return delValue;
    }

    //method to get the item in the front
    int getFront(){
        return qFront->data;
    }

    //method to get the item in the rear
    int getRear(){
        return rear->data;
    }

    //method to return the queue item count
    int qCount(){
        int counter = 0;
        Node* temp = qFront;
        while(temp !=NULL){
            counter++;
            temp = temp->next;
        }
        return counter;
    }

    //search form specific item in queue
    bool isFound(int item){
        bool found = false;
        Node* temp = qFront;
        while(temp!=NULL){
            if(temp->data == item){
                found = true;
            }else{
                temp = temp->next;
            }

        }
        return found;

    }

    //clear all item
    void qClear(){
        while(!isEmpty()){
            dequeue();
        }
    }

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
