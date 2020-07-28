#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <iostream>

using namespace std;

template <class T>
class LinkedList
{
    //Single node
    struct Node
    {
        T elem;
        Node *next;
    };
    //Head Pointer of Linked List
    Node* head;

public:
    //Constructor
    LinkedList(){head = nullptr;}
    //Destructor
    ~LinkedList()
    {
        Node* tmp;
        while(head)
        {
            tmp = head;
            head = head->next;
            delete tmp;
        }
    }
    void push_back(T elem);
    Node* newNode(T elem); //Returns pointer to new node
    void push_front( T elem); //Add node to the front of Linked List
    void printList();
    void reverseLinkedList();
};

template <class T>
void LinkedList<T>::push_back( T elem)
{
    auto tmp = head;
    if(head == nullptr)
        head = newNode(elem);
    else
    {
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = newNode(elem);
    }
}

template <class T>
typename LinkedList<T>::Node* LinkedList<T>::newNode(T elem)
{
    Node* node = new Node;
    node->elem = elem;
    node->next = nullptr;
    return node;
}

template <class T>
void LinkedList<T>::push_front(T elem)
{
    Node* tmp = newNode(elem);
    tmp->next = head;
    head = tmp;
}

template <class T>
void LinkedList<T>::printList()
{
    auto tmp = head;
    while(tmp != nullptr)
    {
        std::cout << tmp->elem << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

template<class T>
void LinkedList<T>::reverseLinkedList()
{
    Node* cur = head;
    Node* prev = nullptr;
    Node* next = nullptr;
    while(cur != nullptr)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}


#endif // LINKEDLIST_H
