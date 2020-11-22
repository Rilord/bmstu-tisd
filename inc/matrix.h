#ifndef __MATRIX_H__
#define __MATRIX_H__
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#define SUCCESS 0
#define FAILURE 1
#define TRUE 1
#define FALSE 0

#define MEM_ERROR 11
typedef struct node
{
    int start;
    struct node *next;
} node_t;

typedef struct list
{
    struct node *ptr;
} list_t;

typedef struct 
{
    int x;
    int y;
    int current;

    int *A;
    int *IA;
    list_t JA;
} my_matrix_t;

typedef struct matrix
{
    int **mat;
    int x;
    int y;
} matrix_t;


void free_list(list_t *list);

int new_matrix(matrix_t *const mat);

void free_matrix(matrix_t *const mat);

void free_result(matrix_t *mat, matrix_t *vec, matrix_t *res);

void free_all(list_t *list_mat, list_t *list_vec, list_t *list_res,
        matrix_t *mat, matrix_t *vec, matrix_t *res);
#endif 
