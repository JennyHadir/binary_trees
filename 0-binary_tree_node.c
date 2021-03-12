#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node
 * @parent: a pointer to the parent node
 * @value: value to put in the new node
 * Return: a pointer to the new node or NULL if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	node->left = node->right = NULL;
	return (node);
}
