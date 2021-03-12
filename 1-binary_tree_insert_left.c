#include "binary_trees.h"
/**
 * binary_tree_insert_left - INSERTS A NODE AS THE LEFT-CHILD OF ANOTHER NODE
 * @value: value to store in the new node
 * @parent: pointer to the node to insert the right-child in
 * Return: Pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent)
	{
		node = malloc(sizeof(binary_tree_t));
		if (!node)
			return (NULL);
		node->n = value;
		if (parent->left)
		{
			node->parent = parent;
			parent->left->parent = node;
			node->left = parent->left;
		}
		parent->left = node;
		return (node);
	}
	return (NULL);
}
