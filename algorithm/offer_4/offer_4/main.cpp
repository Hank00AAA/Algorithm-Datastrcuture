//
//  main.cpp
//  offer_4
//
//  Created by hhs on 2019/5/30.
//  Copyright © 2019年 hhs. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

/*
输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。
 */

int FindRoot(vector<int> &pre, vector<int> &vin, int left, int right){
    if(left>right){
        return -1;
    }
    for(int i=0;i<pre.size();++i){
        for(int k=left;k<=right;++k){
            if(pre[i]==vin[k]){
                return k;
            }
        }
    }
    return -1;
}

TreeNode* ConstructBinaryTree(vector<int>&pre, vector<int>& vin, int left, int right){
    int root = FindRoot(pre, vin, left, right);
    if(root == -1){ return NULL;}
    TreeNode* head = new TreeNode(vin[root]);
    head->left = ConstructBinaryTree(pre, vin, left, root-1);
    head->right = ConstructBinaryTree(pre, vin, root+1, right);
    return head;
}

TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin){
    TreeNode* head;
    if(pre.size()==0||vin.size()==0){
        return NULL;
    }
    head = ConstructBinaryTree(pre, vin, 0, vin.size()-1);
    return head;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
