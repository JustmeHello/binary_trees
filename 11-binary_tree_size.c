#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_tree_size - Mesures the size of a binary
 * tree.
 * @tree; A pointer to the root node of the tree to measure the size of.
=======

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
<<<<<<< HEAD
	size_t = 0;
=======
	size_t size = 0;

>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
