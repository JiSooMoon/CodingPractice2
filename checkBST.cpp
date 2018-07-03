/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
 bool helper(Node *node, int min, int max){
 
     if(node == NULL) return true;
     if(node->data <= min || node->data >= max) return false;
     return
         helper(node->left, min, node->data) && 
         helper(node->right, node->data, max);
     
 }
	bool checkBST(Node* root) {
        return helper(root,INT8_MIN, __INT_MAX__);
	}

   
