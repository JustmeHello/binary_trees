#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Apointer to the root node of the tree to measure the height.
=======

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
<<<<<<< HEAD
		size_t l = 0, r=0;
		l=tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r=tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l>r)? l : r(;
	}
	return(0);
=======
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
}
