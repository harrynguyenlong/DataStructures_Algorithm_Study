//
//  SingleLinkedList.hpp
//  DataStructure_Algorithm_In_C++
//
//  Created by Nguyen, Long on 10/19/20.
//


#ifndef SingleLinkedList_hpp
#define SingleLinkedList_hpp

#include <iostream>
#include <stdio.h>
// The actual Node with data element and pointer to next node
template <typename E>
class Node {
public:
    E elem;
    Node<E>* next;
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
public:
    LinkedList();
    ~LinkedList();
    
    bool isEmpty() const;
    T getHead() const;
    void add(const T& value);
    void remove();
    
};

template <typename T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template <typename T>
LinkedList<T>::~LinkedList<T>() {

}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return head == NULL;
}

template <typename T>
T LinkedList<T>::getHead() const {
    return head->elem;
}

template <typename T>
void LinkedList<T>::add(const T& value) {
    Node<T>* newNode = new Node<T>;
    newNode->elem = value;
    newNode->next = head;
    
    head = newNode;
}

template <typename T>
void LinkedList<T>::remove() {
    if (head != NULL) {
        Node<T>* next = head->next;
        Node<T>* old = head;

        head = next;
        delete old;
    }
}

#endif /* SingleLinkedList_hpp */
