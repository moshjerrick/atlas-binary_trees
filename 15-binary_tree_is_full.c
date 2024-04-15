#include "binary_trees.h"

/**
 * binary_tree_is_full - check to see if tree is full
 * @tree: pointer to root node of tree 
 * 
 * Return: if full or null 
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        if (!tree->left && !tree->right)
                return (1);
        if (tree->left && tree->right)
                return (binary_tree_is_full(tree->left)
                && binary_tree_is_full(tree->right));
        return (0);
}
