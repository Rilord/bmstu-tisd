#include "../inc/matrix.h"

int new_matrix(matrix_t *const mat)
{
    mat->mat = malloc(mat->y * sizeof(int *));

    if (mat->mat == NULL)
    {
        return MEM_ERROR;
    }

    for (int i = 0; i < mat->y; i++)
    {
        mat->mat[i] = malloc(mat->x * sizeof(int));

        if (mat->mat[i] == NULL)
        {
            return MEM_ERROR;
        }
    }
    return SUCCESS;
}

void free_list(list_t *list)
{
    node_t *current, *tmp = NULL;
    current = list->ptr;

    while (current->next != NULL)
    {
        tmp = current->next;
        free(current);
        current = tmp;
    }

    free(tmp);
}
void free_matrix(matrix_t *const mat)
{
    for (int i = 0; i < mat->y; i++)
    {
        free(mat->mat[i]);
        mat->mat[i] = NULL;
    }

    free(mat->mat);
    mat->mat = NULL;
}

void free_result(matrix_t *mat, matrix_t *vec, matrix_t *res)
{
    free_matrix(mat);
    free_matrix(vec);
    free_matrix(res);
}

void free_all(list_t *list_mat, list_t *list_vec, list_t *list_res,
        matrix_t *mat, matrix_t *vec, matrix_t *res)
{
    free_list(list_mat);
    free_list(list_vec);
    free_matrix(mat);
    free_matrix(vec);
}
