#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree
* @tree: pointer to root node of a tree
*
* Return: size of the tree
*
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
		size_t size = 0;

		if (!tree)
				return (0);
		if (!tree->left && !tree->right)
				return (1);

		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
		return (size + 1);
}
