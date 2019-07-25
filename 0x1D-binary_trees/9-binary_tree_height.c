#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - return the height of a node
 * @tree: pointer to binary tree
 *
 * Return: return the height of a node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	int left = 0;
	int right = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree->left)
			left = (1 + binary_tree_height(tree->left));
		if (tree->right)
			right = (1 + binary_tree_height(tree->right));

		if (left > right)
			return (left);
		else
			return (right);
	}
}
