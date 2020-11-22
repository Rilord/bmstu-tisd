#include "../inc/mult.h"

void mult(matrix_t *mat, matrix_t *vec, matrix_t *res)
{
    for (int i = 0; i < mat->y; i++)
    {
        for (int j = 0; i < mat->x; j++)
        {
            res->mat[0][i] += mat->mat[i][j] * vec->mat[0][j];
        }

    }
}

void sparce_mult(my_matrix_t *mat, matrix_t *vec, my_matrix_t *res)
{

}
