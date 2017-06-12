#include <stdlib.h>
#include <stdio.h>
#include "treeType.h"
#include <math.h>

#ifndef _TREE_TYPE
typedef struct t_node *TREE;
// macros for the heap array
#define PARENT(i)  floor( i / 2)
#define LEFT(i)   2 * i
#define RIGHT(i)  2 * i + 1

#endif

TREE create_node(ITEM item);
TREE create_tree_from_array(int * array, int n, int i); // create a tree from a heap array
void insert_left(TREE parent, TREE son);
void insert_right(TREE parent, TREE son);
void insert(TREE parent, TREE left, TREE right);
TREE get_left(TREE parent);
TREE get_right(TREE parent);

int get_tree_height(TREE tree);
ITEM get_item(TREE tree);
void print_tree_pre_order(TREE tree);
void print_tree_in_order(TREE tree);
void print_tree_post_order(TREE tree);
void print_tree(TREE tree);

void delete_tree(TREE a);
