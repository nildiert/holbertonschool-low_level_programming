#include "binary_trees.h"

/**
 * *binary_tree_sibling - return the sibling of a node
 * @node: pointer to binary node
 *
 * Return: return the sibling of a node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
