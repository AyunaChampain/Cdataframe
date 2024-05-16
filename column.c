//
// Created by ayuna on 18/04/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include "column.h"

COLUMN *create_column(char* title)
{
    COLUMN * p ;
    COLUMN c = {*title, 256, 0, {}};
    p = &c ;
    return p ;
}



int insert_value(COLUMN* col, int value)
{
    int taille = (col->TL) ;
    if (taille == 0)
    {
        (col -> val[0]) = value ;
        col -> TL ++ ;
        return 1 ;
    }
    if (taille < REALOC_SIZE)
    {
        (col -> val[taille + 1]) = value;
        col -> TL ++ ;
        return 1 ;
    }
    else
    {
        //(col->val) = realloc(col->val, 256);
        return 0 ;
    }
}

void delete_column(COLUMN **col) //Free allocated memory
{
    free(*col);
}

void print_col(COLUMN* col)
{
    int i ;
    printf("\ncol%d\n", col -> TL);
    for (i = 0; i < (col -> TL); i++)
    {
        printf("[%d] %d", i, col -> val[i]);
    }
}

int occur(COLUMN* col, int x){
    int i;
    int cpt = 0;
    int values;
    for(i = 0; i < REALOC_SIZE ; i++){
        values = col -> val[i];
        if (values == x){
            cpt++;
        }
    }
    return cpt;
}
int pos_val_col(COLUMN* col, int x)
{
    int values;
    values = col -> val[x];
    return values;
}

int supp_x_col(COLUMN* col, int x)
{
    int i;
    int cpt = 0;
    int values;
    for(i = 0; i < REALOC_SIZE ; i++)
    {
        values = col -> val[i];
        if (values > x){
            cpt++;
        }
    }
    return cpt ;
}


int inf_x_col(COLUMN* col, int x)
{
    int i;
    int cpt = 0;
    int values;
    for(i = 0; i < REALOC_SIZE ; i++){
        values = col -> val[i];
        if (values < x){
            cpt++;
        }
    }
    return cpt;
}
int equ_x_col(COLUMN* col, int x)
{
    int i;
    int cpt = 0;
    int values;
    for(i = 0; i < REALOC_SIZE ; i++){
        values = col -> val[i];
        if (values == x){
            cpt++;
        }
    }
    return cpt;
}