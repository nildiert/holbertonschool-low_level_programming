#include "binary_trees.h"

/**
 * binary_tree_postorder - Print in post-order
 * @tree: pointer to binary tree
 * @func: pointer to function
 *
 * Return: return a pointer to the new node, or NULL on failure.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree)
	{

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
