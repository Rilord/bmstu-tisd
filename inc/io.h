#ifndef __IO_H__
#define __IO_H__
#include "matrix.h"

void menu();

void print_mult_res(const matrix_t mat);

void print_cmp_res(matrix_t mat, my_matrix_t sparce,
        int64_t start1, int64_t end1, int64_t end2, 
        int sz);

void print_random_mat(matrix_t mat, matrix_t vector);

void print_sparce_mat(const matrix_t mat);

int read_dimensions(my_matrix_t *mat, my_matrix_t *vec);

int read_type(bool *type);

int read_mat(matrix_t *mat, const int max);

int read_vec(matrix_t *mat, const int max);

#endif
