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


/**
 * print_node_by_level - function that prints nodes by level
 * @node: Pointer to a node
 * @level: Level of  a node
 * @func: pointer to a function to call for each node.
 *
 * Return: nothing.
 */

void print_node_by_level(binary_tree_t *node, int level, void (*func)(int))
{
	if (node == NULL)
		return;

	if (level == 1)
		func(node->n);
	else if (level > 1)
	{
		print_node_by_level(node->left, level - 1, func);
		print_node_by_level(node->right, level - 1, func);
	}
}


/**
 * binary_tree_levelorder - function that goes through a binary tree using
 * level-order traversal
 * @tree: function that goes through a binary tree using in-order traversal.
 * @func: pointer to a function to call for each node.
 *
 * Return: nothing.
 */


void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;
	binary_tree_t *temp;

	temp = (binary_tree_t *)tree;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree) + 1;
	for (i = 0; i <= height; i++)
		print_node_by_level(temp, i, func);
}
