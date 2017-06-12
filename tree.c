
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

struct t_node
{
	TREE left;
	TREE right;
	ITEM item;
};


TREE create_node(ITEM item)
{
	TREE node = (TREE)malloc(sizeof(TREE));
	if (!node) {
		fprintf(stdout, "Memmory allocation error!\n");
		exit(1);
	}

	node-> left = NULL;
	node-> right = NULL;
	node-> item = item;

	return node;
}



TREE create_tree_from_array(int * array, int n, int i) // create a tree from a heap array
{
	   
	   
	  

		   TREE node = (TREE)malloc(sizeof(TREE));
			if (!node) {
				fprintf(stdout, "Memmory allocation error!\n");
				exit(1);
			}
			 // put the item
			node -> item = create_item(array[i - 1], ' ');
			

			int l = LEFT(i);
			int r = RIGHT(i);

			// put the left
			if(l <= n)
			{
			 insert_left(node, create_tree_from_array(array, n , LEFT(i)));	
			}
			// put the right
			if(r <= n)
			{
			 insert_right(node, create_tree_from_array(array, n, RIGHT(i)));		
			}

			//print_tree(node);
		

	return node;

}


void insert_left(TREE parent, TREE son)
{
	parent->left = son;
}

void insert_right(TREE parent, TREE son)
{
	parent->right = son;
}

void insert(TREE parent, TREE left_son, TREE right_son)
{
	parent->left = left_son;
	parent->right = right_son;
}

TREE get_left(TREE parent)
{
	return parent->left;
}

TREE get_right(TREE parent)
{
	return parent->right;
}

ITEM get_item(TREE node)
{
	return node->item;
}

void print_tree(TREE tree)
{
	if(tree != NULL)
	{
		printf("%d\n", get_item_key(tree->item));
		print_tree(tree->left);
		print_tree(tree->right);

	}
}

void print_tree_pre_order(TREE tree){

    if (tree == NULL) return;

        printf("%d\n", get_item_key(tree->item));
        print_tree_pre_order(tree->left);
        print_tree_pre_order(tree->right);

};

void print_tree_in_order(TREE tree){

    if (tree == NULL) return;

        print_tree_in_order(tree->left);
        printf("%d\n", get_item_key(tree->item));
        print_tree_in_order(tree->right);

};

void print_tree_post_order(TREE tree){

    if (tree == NULL) return;

        print_tree_post_order(tree->left);
        print_tree_post_order(tree->right);
        printf("%d\n", get_item_key(tree->item));

};

int get_tree_height(TREE tree)
{	int left_height = 0;
	int right_height = 0;
	
	if( tree != NULL)
	{	if(tree->left) left_height = 1;
		if(tree->right) right_height = 1;
		left_height += get_tree_height(tree->left);
		right_height += get_tree_height(tree->right);
	}

	return (left_height > right_height?left_height:right_height);

}

void delete_tree(TREE a){;}

