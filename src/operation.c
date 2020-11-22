#include "../inc/operation.h"

int init_list(int sz, list_t *list)
{
    list->ptr = NULL;

    for (int i = 0; i < sz; i++)
    {
        node_t *current = malloc(sizeof(node_t));

        if (current == NULL)
        {
            puts("MEM ERROR");
            return MEM_ERROR;   
        }

        current->next = list->ptr;
        current->start = -1;

        list->ptr = current;
    }
    return 0;
}

void print_list(const list_t *const list, void (*print_node) (node_t))
{
    node_t *node = list->ptr;

    if (node == NULL)
    {
        puts("List is empty");
        return;
    }

    while (node->next != NULL)
    {
        (*print_node)(*node);
        node = node->next;
    }

    (*print_node)(*node);
}

node_t *get_pos(const list_t *list, const int pos)
{
    node_t *tmp = list->ptr;

    for (int i = 0; i < pos; i++)
    {
        if (tmp->next == NULL)
        {
            return tmp;
        }

        tmp = tmp->next;
    }
    return tmp;
}

void edit_pos(node_t *node, const list_t *list, const int pos)
{
    node_t *tmp = get_pos(list, pos);
    *tmp = *node;
}
