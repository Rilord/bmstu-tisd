#ifndef __MULT_H__
#define __MULT_H__
#include "matrix.h"

void mult(matrix_t *mat, matrix_t *vec, matrix_t *res);

void transpose(matrix_t *mat);

void sparce_mult(my_matrix_t *mat, matrix_t *vec, my_matrix_t *res);

#endif 
