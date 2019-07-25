#include "binary_trees.h"


/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 *
 * Return: If tree is NULL, the function must return 0, else numbers of the
 * leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right)
	       + binary_tree_is_leaf(tree));

}

/**
 * binary_tree_is_leaf - creates a binary tree node
 * @node: pointer to the parent node of the node to create.
 *
 * Return: return a pointer to the new node, or NULL on failure.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}
