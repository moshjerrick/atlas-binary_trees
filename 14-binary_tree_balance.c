#include "binary_trees.h"

/**
 * binary_tree_balance - measure balance factory of binary tree
 * @tree: pointer to root of node of tree
 * 
 * Return: NULL, or return balance factor
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
        int r_height, l_height;

        if (!tree)
                return (0);
        r_height = _binary_tree_height(tree->right);
        l_height = _binary_tree_height(tree->left);
        return (1 + ((r_height >= l_height) ? r_height: l_height));
}


/**
 * 
 */
int binary_tree_balance(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}