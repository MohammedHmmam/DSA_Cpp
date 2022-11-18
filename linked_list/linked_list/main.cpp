#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;

};

class LinkedList{
public:
    Node* head;
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
            Node* newNode = new Node();
            newNode->data = newValue;
            newNode->next = NULL;
            head = newNode;

        }else{
            Node* newNode = new Node();
            newNode->data = newValue;
            newNode->next = head;
            head = newNode;
        }
    }


    //Function to display linked List Items
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "\n";
            temp = temp->next;
        }
    }

    //function to return count of items in Linked List
    int count(){

        int counter = 0;
        Node* temp = head;
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
                found = true;
            }
            temp = temp->next;
        }
        return found;
    }

    //Method to insert Value before specific item
    void insertBefore(int item, int newValue){
        Node* newNode = new Node();
        newNode->data = newValue;

        Node* temp = head;

        while(temp->next !=NULL && temp->next->data != item){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;

    }

};


int main()
{

    LinkedList lst;

    int item;
    cout<< "Inter new item:\n";
    cin >> item;
    lst.insertFirst(item);

    cout << "Linked List After Add the last item :\n";
    lst.display();
        cout<< "Inter new item:\n";
    cin >> item;
    lst.insertFirst(item);

    cout << "Linked List After Add the last item :\n";
    lst.display();
        cout<< "Inter new item:\n";
    cin >> item;
    lst.insertFirst(item);

    cout << "Linked List After Add the last item :\n";
    lst.display();
        cout<< "Inter new item:\n";
    cin >> item;
    lst.insertFirst(item);

    cout << "Linked List After Add the last item :\n";
    lst.display();

    cout << "Enter The Position to insert New Value after it: \n";
    cin >> item;
    int newValue;

    cout << "Enter New Value:\n";
    cin >> newValue;

    lst.insertBefore(item,newValue);

    cout << "After insert the new Item after specific position:\n";

     lst.display();
}
