#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL, your function must return 0, else
 * 0 if is full, of other way 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if ((binary_tree_size(tree) % 2) == 0)
		return (0);
	else
		return (1);
}

/**
 * binary_tree_size - return the size of a tree
 * @tree: pointer to binary tree
 *
 * Return: return the size of a node
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
