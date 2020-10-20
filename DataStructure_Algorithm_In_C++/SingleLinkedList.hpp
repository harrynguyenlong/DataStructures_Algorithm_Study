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
    void addAt(const T& value, int position);
    void remove();
    int count() const;
    void reverse();
};

template <typename T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template <typename T>
LinkedList<T>::~LinkedList<T>() {
    while (!isEmpty()) {
        remove();
    }
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

template <typename T>
int LinkedList<T>::count() const {
    if (head == NULL) {
        return 0;
    }
    
    int count = 1;
    Node<T>* start = head;
    
    while (start->next != NULL) {
        count++;
        start = start->next;
    }
    
    return count;
}

template <typename T>
void LinkedList<T>::addAt(const T &value, int position) {
    if ((position > (count() - 1)) || position < 0) {
        throw "Index of out bounds";
    }
    
    if (position == 0) {
        add(value);
        return;
    }
    
    int i = 0;
    Node<T>* node = head;

    while (i < (position - 1)) {
        node = node->next;
        i++;
    }

    Node<T>* newNode = new Node<T>();
    newNode->elem = value;
    newNode->next = node->next;
    
    node->next = newNode;
}

template <typename T>
void LinkedList<T>::reverse() {
    Node<T>* current = head;
    Node<T>* backRef = NULL;
    Node<T>* next;
        
    while(current != NULL) {
        next = current->next;
        current->next = backRef;
        backRef = current;
        current = next;
    }
    
    head = backRef;
}

#endif /* SingleLinkedList_hpp */
