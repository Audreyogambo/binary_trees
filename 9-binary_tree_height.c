#include "binary_trees.h"

/**
 *A function that measures the height of a binary tree
 *  @tree: pointer root node of the tree to measure height.
 * @?: RESULT = (COND) ? ( STATEMEN IF TRUE) : (STATEMENT IF FALSE)
 * Return 0 if tree is null
 * height of a tree is the number of nodes from the root node to the deepest leaf
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t h_left = 0, h_right = 0;
    if (tree)
    {
        
        h_left = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;
        h_right = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;

        return (h_left > h_right) ? h_left : h_right;  
    }
    return 0;
} 
