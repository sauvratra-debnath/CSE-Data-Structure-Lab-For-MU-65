#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node *next;
    node *prev;
};

struct DoublyLinkedList {
    node *head, *tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
        cout << "Doubly Linked List initialized!"<<endl;
    }
};

int main(){
    DoublyLinkedList d1;
    return 0;
}

