#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL, the function must return 0, else 1 if is perfect
 * or 0 is not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, i, pow;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);


	if (height == 0)
		return (1);
	else if (height == 1)
	{
		if (binary_tree_leaves(tree) == 2)
			return (1);
		else
			return (0);
	}
	else
	{
		pow = 1;
		for (i = 0; i < height; i++)
		{
			pow *= 2;
		}

		if (pow == binary_tree_leaves(tree))
			return (1);
		else
			return (0);
	}
}


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
