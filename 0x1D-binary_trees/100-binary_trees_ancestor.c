#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 *
 * Return: Your function must return a pointer to the lowest common
 * ancestor node of the two given nodes. If no common ancestor was
 * found, your function must return NULL depth.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	int first_depth, second_depth, top, i;
	binary_tree_t *temp_first, *temp_second;

	if (!first || !second)
		return (NULL);

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);
	temp_first = (binary_tree_t *)first;
	temp_second = (binary_tree_t *)second;

	if (first_depth > second_depth)
	{
		top = second_depth - first_depth;
		for (i = 0; i < top; i++)
		{
			temp_first = temp_first->parent;
		}
	}
	else if (first_depth < second_depth)
	{
		top = second_depth - first_depth;
		for (i = 0; i < top; i++)
		{
			temp_second = temp_second->parent;
		}
	}

	for (; temp_first && temp_second; )
	{
		if (temp_first->n == temp_second->n)
		{
			return (temp_first);
		}
		temp_first = temp_first->parent;
		temp_second = temp_second->parent;
	}
	return (NULL);
}

/**
 * binary_tree_depth - function that measures the depth of a node in a binary
 * tree
 * @tree: pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else the number of
 * depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}
