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
//Case in this LL
//2->4->3->null
//5->6->4->null
/* 342
  465
  ----
  807
  7->0->8->null
*/

class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head =tail = NULL;
    }

    void addTwoNumbers(int val1,int val2){
        Node* newNode = new Node(val1+val2);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            tail = newNode;
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
};

int main(){
    List l1;
    List l2;
    List result;

    l1.push_back(2);
    l1.push_back(4);
    l1.push_back(3);

    // Adding numbers to the second linked list
    l2.push_back(5);
    l2.push_back(6);
    l2.push_back(4);



    return 0;
}