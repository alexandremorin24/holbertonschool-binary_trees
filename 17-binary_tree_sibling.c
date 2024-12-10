#include "binary_trees.h"

/**
*binary_tree_sibling - is a function that
*finds the sibling of a node
*@node: pointer to the node to find the sibling
*Return: NULL if node or parent is NULL
*if node has no sibling return NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	else if (node == node->parent->right)
	return (node->parent->left);

	else
	return (NULL);

}
