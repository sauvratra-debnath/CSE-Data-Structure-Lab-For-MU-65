#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node *next;
};

struct SinglyLinkedList {
    node *head, *tail;

    SinglyLinkedList (){
        head = NULL;
        tail = NULL;
        cout << "Singly Linked List initialized!" <<endl;
    }

    void enqueue(int x) {
        node *cur = new node;
        cur->val = x;
        cur->next = NULL;

        if(head == NULL && tail == NULL){
            head = tail = cur;
            return;
        }
        
        tail->next = cur;
        tail = cur;
    }

    void printList() {
        cout << "SinglyLinkedList: ";
        node *cur = head;

        if(cur == NULL){
            cout << "List is Empty!"<<endl;
            return;
        }
        
        while (cur != NULL){
            cout << cur->val << " -> ";
            cur = cur->next;
        }
        cout << "NULL" <<endl;
    }
};

int main() {
        SinglyLinkedList s1;

        s1.enqueue(10);
        s1.enqueue(20);
        s1.enqueue(30);

        s1.printList();
        return 0;
}