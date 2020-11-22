#include<iostream>
#include "tree.h"
using namespace std;
Tree<int>* takeInput()
{
	int r_data;
	cout<<"enter data"<<endl;
	cin>>r_data;
	Tree<int> *root=new Tree<int>(r_data);
	int n_child;
	cout<<"enter children"<<endl;
	cin>>n_child;
	for(int i=0;i<n_child;i++)
	{
		Tree<int> *childN=takeInput();
		root->child.push_back(childN);
	}
	return root;
	
}
void printTree(Tree<int> *root)
{
	if (root == NULL) {
		return;
	}
	cout<<root->data<<":";
	for(int i=0;i<root->child.size();i++)
	{
		cout<<root->child[i]->data<<" ";
	}
	cout<<endl;
	for(int i=0;i<root->child.size();i++)
	{
		printTree(root->child[i]);
	}
}
int main()
{
	Tree<int> *root=takeInput();
	printTree(root);
}
