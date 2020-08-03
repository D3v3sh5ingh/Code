#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define lli  long long int

struct BST 
{ 
    lli data,pos; 
    struct BST *left, *right; 
}; 
BST * getnode(lli val, lli pos)
{
	BST * newNode = new BST;
	newNode->left = newNode->right = NULL;
	newNode->data = val;
	newNode->pos = pos;
	return newNode;

}
BST * deleteNode(BST * node, lli val)
{
	if (node)
	{
		if (node->data > val)
		{
			node->left = deleteNode(node->left, val);
		}
		else if (node->data < val)
		{
			node->right = deleteNode(node->right, val);
		}
		else
		{
			cout << node->pos << endl;
			if (!node->left)
			{
				BST * x = node->right;
				free(node);
				return x;
			}
			else if (!node->right)
			{
				BST *x = node->left;
				free(node);
				return x;
			}
			else
			{
				BST *x = node->right;
				while (x->left)
				{
					x = x->left;
				}
				node->data = x->data;
				node->right = deleteNode(node->right, node->data);
			}
		}
	}
	return node;
}

BST * insert(BST *node, lli val, lli pos)
{
	if (!node)
	{
		cout << pos << endl;
		return getnode(val, pos);
	}

	if (node->data > val)
	{
		node->left = insert(node->left, val, 2 * pos);
	}
	else
	{
		node->right = insert(node->right, val, 2 * pos + 1);
	}
	return node;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
       char t;
        lli x;
        cin>>t>>x;
        BST *node = NULL;
        if(t=='i')
        {
            
        	node = insert(node, x, 1);


        }
        else
        {
            			node = deleteNode(node, x);

            
        }
    }
    return 0;
}
