#include <stdio.h>
#include<iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{}
    first =	NULL;
    last = NULL;
}
LinkedList::~LinkedList()
{
    clear();
}

void LinkedList::insertAtBack(int valueToInsert)
{
    Node* in = new Node();
    
    ins -> val = valueToInsert;
    in -> next = NULL;
    if (first == NULL && last == NULL) {
        first = in;
        last = in;
    } else {
        last->next = in;
        last = in;
    }
}
bool LinkedList::removeFromBack(){//removes a node from the back
    Node *remove = last;
    
    if (first == last) {
        first = NULL;
        last = NULL;
    }else{
        Node *Tail = first;
        while (pToTail -> next != last) {
            Tail = Tail ->next;
        }
        last = Tail;
        last -> next = NULL;
    }
    delete remove;
    return true;
}
void LinkedList::print(){//prints the whole list
    Node *printN = first;
    
    if (first == NULL) {
        cout << "";
        return;
    }
    while (printN->next != NULL) {
        if (printN -> next == last){
            cout << printN->val;
        }else{
            cout << printN->val << ",";
        }
        printN = printN->next;
    }
}
bool LinkedList::isEmpty(){
    if(first == NULL && last == NULL)
        return true;
    else
        return false;
}
int LinkedList::size(){
    int size = 0;
    Node* cur = first;
    while (cur != NULL)
    {
        cur = cur->next;
        size++;
    }
    return size;
}
void LinkedList::clear()
{
    Node *remove = first;
    while (remove != NULL) {
        first = first -> next;
        delete [] remove;
        remove = first;
    }
    last = first = NULL;
}



void LinkedList::insertAtFront(int valueToInsert)
{
    Node *temp = new Node;
    temp -> val = valueToInsert;
    temp -> next = first;
    first = temp;
}
bool LinkedList::removeFromFront()
{
    Node *remove = first;
    if (first == last) {
        first = NULL;
        last = NULL;
        return false;
    } else {
        first = first -> next;
    }
    delete remove;
    return true;
}
