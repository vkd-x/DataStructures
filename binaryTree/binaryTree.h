


class BinaryTree
{
    template <class T>
    struct Node
    {
        T val;
        Node *rght;
        Node *left;
    };
public:
    void addNode();
    void deleteNode();
    void search();
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
};
