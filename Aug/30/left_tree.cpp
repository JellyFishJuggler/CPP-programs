

/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */





//Function to return a list containing elements of left view of the binary tree.
// vector<int> leftView(Node *root)
// {
//    // Your code here
//    vector<int>ans;
//    queue<Node*>q;
//    q.push(root);
//    while(!q.empty()){
//        int size = q.size();
//        for(int i=0; i<size; i++){
//            Node* value = q.front();
//            q.pop();
//            if(i == 0)   ans.push_back(value->data);
           
//            if(value->left)  q.push(value->left);
//            if(value->right) q.push(value->right);
//        }
//    }
//    return ans;
// }