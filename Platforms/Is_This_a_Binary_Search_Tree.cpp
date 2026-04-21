/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

    int mx = 0, mn = 0;
    void getMx(Node * root)
    {
        if(root == NULL) return;
        
        mx = max(mx, root->data);
        getMx(root->left);
        getMx(root->right);
    }
    void getMn(Node * root)
    {
        if(root == NULL) return;
        
        mn = max(mn, root->data);
        getMx(root->left);
        getMx(root->right);
    }

    bool ok= true;
    void x(Node * root)
    {
        if(root == NULL) return;
        
        mn = 1000000, mx = -1;
        getMx(root->left);
        getMn(root->right);
            
        
        if(root->data < mx || root->data > mn) ok = false;
        
        x(root->left);
        x(root->right);
    }
	bool checkBST(Node* root) {
        x(root);

        return ok;
	}