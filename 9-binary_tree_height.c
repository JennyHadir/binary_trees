#include "binary_trees.h"
/**
 * a
 * 
 * 
 * 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);
	
	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	if(left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}
