#ifndef __PROCESS_H__
#define __PROCESS_H__
#include "matrix.h"

void init_dimensions(my_matrix_t *const vec, const int x);

int init_sparce_matrix(my_matrix_t *const sparce, 
        int *const A, int *const IA, list_t *list);

int init_matrix(matrix_t *const mat, const int x, const int y);

int matrix_fill(matrix_t *mat, my_matrix_t *sparce, 
        const bool type, 
        const bool mv_type);

#endif
