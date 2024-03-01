#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
<<<<<<< HEAD
 * of another in a binary tree.
=======
 *                            of another in a binary tree.
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
<<<<<<< HEAD
 * Otherwise - a pointer to the new node.
 * Description: If parent already has a right-child, the new node
 * takes its place and the old right-child is set as the 
 * right-child of the new node.
=======
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
<<<<<<< HEAD
	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
=======

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
<<<<<<< HEAD
=======

>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
	return (new);
}
