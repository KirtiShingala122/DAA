/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
         if(!root) return {};
     
        queue<pair<Node*,int>> q;
        q.push({root,0});
        
        map<int ,int> mp;
        vector<int> ans;
        while(!q.empty()){
            Node *temp=q.front().first;
            int i=q.front().second;
            q.pop();
             mp[i]=temp->data;
            // ans.push_back(mp[i]);
            if(temp->left) q.push({temp->left,i-1});
            if(temp->right) q.push({temp->right,i+1});
    }
    for(pair<const int,int> &row:mp){
            ans.push_back(row.second);
    }
    return ans;
    
    }
};
