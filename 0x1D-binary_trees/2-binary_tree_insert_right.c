#include "binary_trees.h"

/**
 * replace_right - replace node in the left of node
 * @parent: pointer to the parent node of the node to create.
 * @node: node to reeplace.
 *
 */

void replace_right(binary_tree_t *parent, binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	temp = parent->right;
	parent->right = node;
	node->right = temp;
	temp->parent = node;
	node->parent = parent;
}

/**
 * *binary_tree_insert_right - creates a binary tree node
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: return a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->right == NULL)
		parent->right = new_node;
	else
		replace_right(parent, new_node);

	return (parent->left);
}
