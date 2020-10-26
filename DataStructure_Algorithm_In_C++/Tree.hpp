//
//  Tree.hpp
//  DataStructure_Algorithm_In_C++
//
//  Created by Nguyen, Long on 10/25/20.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>
#include <iostream>
using std::vector;
using std::string;

//template<typename T>
//class TreeNode {
//public:
//    TreeNode() {}
//    
//    TreeNode(const T& value) {
//        _value = value;
//    }
//    
//    T _value;
//    vector<TreeNode<T>> children;
//};

struct TreeNode {
    string position;
    TreeNode *first, *second;
};

struct org_tree {
    TreeNode* root;
    
    static org_tree create_org_structure(const string& pos) {
        org_tree tree;
        
        tree.root = new TreeNode{pos, NULL, NULL};
        return tree;
    }
    
    static TreeNode* find(TreeNode* root, const string& value) {
        if (root == NULL) {
            return NULL;
        }
        
        if (root->position == value) {
            return root;
        }
        
        auto firstFound = find(root->first, value);

        if(firstFound != NULL) {
            return firstFound;
        }

        return find(root->second, value);
    }
    
    bool addSubordinate(const std::string& manager, const std::string& subordinate) {
        auto managerNode = org_tree::find(root, manager);

        if(!managerNode) {
            std::cout << "No position named " << manager << std::endl;
            return false;
        }

        if(managerNode->first && managerNode->second) {
            std::cout << manager << " already has 2 subordinates." << std::endl;
            return false;
        }
        
        if(!managerNode->first) {
            managerNode->first = new TreeNode{subordinate, NULL, NULL};
        } else {
            managerNode->second = new TreeNode{subordinate, NULL, NULL};
        }

        return true;
    }
};

#endif /* Tree_hpp */
