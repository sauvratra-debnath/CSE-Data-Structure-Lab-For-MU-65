#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *next;
};

struct Queue {
    Node *headPtr;

    Queue() {
        headPtr = NULL;
        cout << "STL-Style Queue initialized!" <<endl;
    }

    bool empty() {
        return headPtr == NULL;
    }
};

int main () {
    Queue q;
    
    if (q.empty()) {
        cout << "The queue is currently empty." <<endl;
    }

    return 0;
}
