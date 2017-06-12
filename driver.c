#include <stdio.h>

#include "tree.h"

int main() {
	ITEM it1 = create_item(1, 'a');
	ITEM it2 = create_item(2, 'b');
	ITEM it3 = create_item(3, 'c');
	ITEM it4 = create_item(5, 'd');
	ITEM it5 = create_item(4, 'e');

	TREE root = create_node(it1); // root
	TREE left = create_node(it2);
	TREE right = create_node(it3);

	 insert(root, left, right);
	 insert(left, create_node(it5), create_node(it4));
	 

    //print_tree(root);
    print_tree_pre_order(root);
    //print_tree_in_order(root);
    //print_tree_post_order(root);
	
		
	return 0;
}
