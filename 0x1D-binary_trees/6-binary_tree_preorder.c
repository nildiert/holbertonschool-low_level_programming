#include "binary_trees.h"

/**
 * binary_tree_preorder - Print in pre order
 * @tree: pointer to binary tree
 * @func: pointer to function
 *
 * Return: return a pointer to the new node, or NULL on failure.
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
