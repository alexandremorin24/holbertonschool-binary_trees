#include "binary_trees.h"

/**
 * binary_tree_height_child - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
int binary_tree_height_child(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_child(tree->left);
	right_height = binary_tree_height_child(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));

}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the node, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_child(tree->left);

	right_height = binary_tree_height_child(tree->right);

	return (left_height - right_height);
}
