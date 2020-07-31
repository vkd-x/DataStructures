/*
*
* Author - Vineet Dwivedi 
* C++ - Implemention of Templated Binary Tree 
*
*/

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>

using namespace std;

template <class T>
class BinaryTree
{
private:
    struct Node
    {
        Node* left;
        Node* rght;
        T elem;
        Node() = delete; //Dont create instance without elem
        Node(T elem): elem(elem),left(nullptr),rght(nullptr){}
    };

    //Only member variable
    Node* rootNode;

public:
    //Constructor
    BinaryTree(){rootNode = nullptr;}
    void insertNode(T elem);
    void inOrder();
    void preOrder();
    void postOrder();

private:
    void insertNodeRecur(Node*& , T elem);
    void inOrderRecur(Node* );
    void preOrderRecur(Node* );
    void postOrderRecur(Node* );
    Node* newNode(T elem){Node* node = new Node(elem); return node;}
};

template <class T>
void BinaryTree<T>::insertNode(T elem)
{
    insertNodeRecur(rootNode, elem);
}

template <class T>
void BinaryTree<T>::insertNodeRecur(Node*& node, T elem)
{
    if(node == nullptr){node = newNode(elem); return;}
    else if(node->elem > elem){insertNodeRecur(node->left, elem);}
    else{insertNodeRecur(node->rght, elem);}
}


/*In order recursive implementation*/
template <class T>
void BinaryTree<T>::inOrder()
{
    inOrderRecur(rootNode);
}

template <class T>
void BinaryTree<T>::inOrderRecur(Node* node)
{
    if(node == nullptr) return;
    else
    {
        inOrderRecur(node->left);
        std::cout << node->elem <<" ";
        inOrderRecur(node->rght);
    }
}

/*Pre order recursive implementation*/
template <class T>
void BinaryTree<T>::preOrder()
{
    preOrderRecur(rootNode);
}

template <class T>
void BinaryTree<T>::preOrderRecur(Node* node)
{
    if(node == nullptr) return;
    else
    {
        std::cout << node->elem <<" ";
        preOrderRecur(node->left);
        preOrderRecur(node->rght);
    }
}


/*Post order recursive implementation*/
template <class T>
void BinaryTree<T>::postOrder()
{
    postOrderRecur(rootNode);
}

template <class T>
void BinaryTree<T>::postOrderRecur(Node* node)
{
    if(node == nullptr) return;
    else
    {
        postOrderRecur(node->left);
        postOrderRecur(node->rght);
        std::cout << node->elem <<" ";
    }
}
#endif