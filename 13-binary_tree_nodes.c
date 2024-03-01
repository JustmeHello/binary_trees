#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 * Return: If tree is NULL, the function must return 0, else
 * return mode count.
=======

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;
<<<<<<< HEAD
	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1: 0;
=======

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
