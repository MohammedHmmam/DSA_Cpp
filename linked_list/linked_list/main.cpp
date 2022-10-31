#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;

};

class LinkedList{
public:
    Node *head;
    LinkedList(){
        head = NULL;
    }

    //function to check if linkedList is empty
    bool isEmpty(){
        return (head == NULL);
    }

    //function to insert item in the first position in the linked list
    void insertFirst(int newValue){
        if(isEmpty()){
            Node *newNode;
            newNode->data = newValue;
            newNode->next = NULL;
            head = newNode;
        }else{
            Node *newNode;
            newNode->data = newValue;
            newNode->next = head;
            head = newNode;
        }
    }


    //Function to display linked List Items
    void display(){
        Node * temp = head;
        while(temp != NULL){
            cout << temp->data;
            temp = temp->next;
        }
    }

    //function to return count of items in Linked List
    int count(){

        int counter = 0;
        Node *temp = head;
        while(temp != NULL){
            counter ++;
            temp = temp->next;
        }
        return counter;
    }

    //Function to search for specific item in linked List
    bool isFound(int key){
        bool found = false;
        Node *temp = head;
        while(temp!=NULL){
            if(temp->data == key){
                fount = true;
            }
            temp = temp->next;
        }
        return found;
    }

};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
