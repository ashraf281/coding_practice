// IMPLEMENTATION OF LINKED LIST

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node* Next;
};

void printList(Node*n){
    while(n!=NULL){
        cout<<n->value<<endl;
        n=n->Next;
    }
}
int main()
{
    Node*Head= new Node();
    Node*Second = new Node();
    Node*third = new Node();
    Node*fourth = new Node();

    Head->value =1;
    Head->Next =Second;
    Second->value =2;
    Second->Next =third;
    third->value =3;
    third->Next =fourth;
    fourth->value =4;
    fourth->Next =NULL;
    printList(Head);
}

