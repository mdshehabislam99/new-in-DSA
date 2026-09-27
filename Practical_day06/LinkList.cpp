#include<bits/stdc++.h>
using namespace std;


class Node{
    public: 
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head =tail = NULL;
    }

   void push_front(int val){ //O(1)
   
    Node* newNode = new Node(val);//dynamic
   // Node newNode(val); //static allocation
   if(head == NULL){
        head = tail = newNode;
        return;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}

void push_back(int val){ //O(1)
    Node* newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
        return;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

void pop_front(){ //O(n)
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}

void pop_back(){ //O(n)

    if(head == NULL){

        cout << "List is empty"<< endl;
        return;
    }

    Node* temp = head;
    while(temp->next != tail){
        temp = temp-> next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;

}

void insert(int val, int pos){ //O(n)
    if(pos < 0){
        cout<<"Invalid position"<<endl;
        return;
    }
    if(pos == 0){
        push_front(val);
        return;
    }
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        if(temp == NULL){
            cout<<"Invalid position"<<endl;
            return;
        }
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

void Print_LinkList(){//O(n)
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int search(int key){ //O(n)
   Node* temp = head;
   int idx = -0;

   while(temp != NULL)
{
    if(temp->data == key){
        return idx;
    }
    temp = temp->next;
    idx++;
}
return -1;}

};

int main(){
 List l;
 l.push_front(1);
  l.push_front(2);
   l.push_front(3);
//    l.push_back(4);
//    l.pop_front();
//    l.pop_back();
l.insert(4, 0);
    l.Print_LinkList();
    cout<<l.search(5)<<endl;
    return 0;
}