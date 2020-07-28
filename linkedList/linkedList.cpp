#include "linkedlist.h"

int main()
{
    //Create new Linked List
    LinkedList<int> ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);
    ll.push_front(60);
    ll.push_front(70);
    ll.printList();
    ll.reverseLinkedList();
    std::cout << " After LinkedList " << std::endl;
    ll.printList();

    LinkedList<std::string> llStr;

    llStr.push_back("I");
    llStr.push_back("just");
    llStr.push_back("made");
    llStr.push_back("my");
    llStr.push_back("templated");
    llStr.push_back("linkedList");
    llStr.push_back("of");
    llStr.push_back("String");
    llStr.push_front("Hello! ");
    llStr.printList();
}
