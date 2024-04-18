#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function that inserts a node
 * @parent: parent node
 * @value: value to store in the new node
 * Return: binary_tree_t *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
		new_node->left = NULL;
	new_node->right = NULL;
	parent->left = new_node;

	return (new_node);
}
