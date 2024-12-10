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
 * binary_tree_size - Measures the siz of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size, i;

	if (tree == NULL)
		return (0);

	height = binary_tree_height_child(tree);
	size = binary_tree_size(tree);

	for (i = 0; i > height; i++)
	{
		expected_size *= 2;
	}

	expected_size += 1;

	return (size == expected_size ? 1 : 0);
}
