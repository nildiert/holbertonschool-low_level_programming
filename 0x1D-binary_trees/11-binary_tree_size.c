#include "binary_trees.h"
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
