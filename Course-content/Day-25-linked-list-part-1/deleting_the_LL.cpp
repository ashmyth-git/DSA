#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }

    ~Node(){
        cout<<"node destructor for data = "<<data<<endl;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List(){ // constructor
        head = NULL;
        tail = NULL;
    }

    ~List(){ // destructor
        cout<<"destructor of list"<<endl;
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
        
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        // Node* newNode(val); // static method 

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode; 
        }
    }

    void printList(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
    }

    void insert(int val, int pos){
        Node* newNode = new Node(val);

        Node* temp = head;

        for (int i = 0; i < pos-1; i++)
        {
            if (temp == NULL)
            {
                cout<<"position is invalid";
                return;
            }
            
            temp = temp->next; // temp is now at pos-1 i.e. prev/left
        }
        
        newNode-> next = temp->next;
        temp->next = newNode;
    }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    
    ll.insert(100, 2);
    
    ll.printList();
    return 0;
}