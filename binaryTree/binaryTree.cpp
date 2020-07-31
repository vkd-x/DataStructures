#include "binaryTree.h"

int main()
{
	std::cout <<" Calling main " << std::endl;
	BinaryTree<int> bTree;

	bTree.insertNode(50);
	bTree.insertNode(60);
	bTree.insertNode(10);
	bTree.insertNode(20);
	bTree.insertNode(30);
	bTree.insertNode(40);
	bTree.insertNode(70);
	bTree.insertNode(80);
	bTree.insertNode(90);

	std::cout << std::endl << " Inorder..." << std::endl;
	bTree.inOrder();
	std::cout << std::endl << " Inorder exit " << std::endl;
	std::cout << std::endl << " Preorder..." << std::endl;
	bTree.preOrder();
	std::cout << std::endl << " Preorder exit " << std::endl;
	std::cout << std::endl << " Postorder..." << std::endl;
	bTree.postOrder();
	std::cout << std::endl << " Postorder exit " << std::endl;
	std::cout << std::endl;
	std::cout << "Exiting main.." << std::endl;
}