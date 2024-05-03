//
// Created by ayuna on 18/04/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include "column.h"

COLUMN *create_column(char* title)
{
    COLUMN * p ;
    COLUMN c = {title, REALOC_SIZE, 0};
    return &c ;
}


int insert_value(COLUMN* col, int value)
{
    int taille = (col->TL) ;
    printf("test");
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
    free(col);
}

void print_col(COLUMN* col)
{
    int i ;

    for (i = 0; i < (col -> TL); i++)
    {
        printf("[%d] %d", i, col -> val[i]);
    }
}

int occur(COLUMN* col, int x){
    int i;
    int cpt = 0;
    int valeur;
    for(i = 0; i < REALOC_SIZE ; i++){
        valeur = col -> val[i];
        if (valeur == x){
            cpt++;
        }
    }
}
int pos_val_col(COLUMN* col, int x)
{
    int valeur;
    valeur = col[x];
    return valeur;
}

/*int supp_x_col(COLUMN* col, int x)
int inf_x_col(COLUMN* col, int x)
int equ_x_col(COLUMN* col, int x)*/
