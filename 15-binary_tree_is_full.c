#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * A full binary tree is a tree in which every node has either 0 or 2 children.
 * If the tree is NULL, the function returns 0.
 * If the tree is full, the function
 * should return a non-zero value (usually 1).
 * If the tree is not full, it returns 0.
 * Return: 0 if the tree is NULL or not full,
 * a non-zero value (usually 1) if the tree is full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

		return (0);
}
