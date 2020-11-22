#ifndef __OPERATION_H__
#define __OPERATION_H__
#include "matrix.h"

int init_list(int sz, list_t *list);

int free_list(list_t *list);

void print_list(const list_t *const list, void (*print_node) (node_t));

node_t *get_pos(const list_t *list, const int pos);

void edit_pos(node_t *node, const list_t *list, const int pos);

#endif 
