#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
int Height(Node* root){
	if(root==NULL){
		return 0;
	}
	return max(Height(root->left),Height(root->right))+1;
}
int Diameter(Node* root){
	if(root==NULL){
		return 0;
	}
	return max((Height(root->left)+Height(root->right)+1),max(Diameter(root->left),Diameter(root->right)));
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right=new Node(7);
//    root->right->left = new Node(6);
    cout << Diameter(root) << endl;
}
