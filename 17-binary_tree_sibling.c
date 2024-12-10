#include "binary_trees.h"

/**
 *binary_tree_sibling - est une fonction qui
 *trouve le frere ou la soeur d'un noeud
 *@node: pointeur sur le noeud pour trouver le frere ou soeur
 *Return: NULL si noeud ou parent est NULL
 *si @node: n'as pas de frere ou soeur return NULL
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
