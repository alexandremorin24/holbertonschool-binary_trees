#include "binary_trees.h"

/**
 * binary_tree_height_child - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height_child(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = binary_trebinary_tree_height_childe_height(tree->left);
	right_height = binary_trebinary_tree_height_childe_height(tree->right);

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

	if (tree->left != NULL)
		left_height = binary_tree_height_child(tree->left);

	if (tree->right != NULL)
		right_height = binary_tree_height_child(tree->right);

	return (left_height - right_height);
}
