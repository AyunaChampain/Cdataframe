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
    int valeur1;
    valeur1 = col -> val[x];
    return valeur1;
}

int supp_x_col(COLUMN* col, int x)
{
    int y;
    int CptSup = 0;
    int valeur2;
    for(y = 0; y < REALOC_SIZE ; y++){
        valeur2 = col -> val[y];
        if (valeur2 > x){
            CptSup++;
        }
    }
}
int inf_x_col(COLUMN* col, int x)
{
    int z;
    int CptInf = 0;
    int valeur3;
    for(z = 0; z < REALOC_SIZE ; z++){
        valeur3 = col -> val[z];
        if (valeur3 < x){
            CptInf++;
        }
    }
/*int equ_x_col(COLUMN* col, int x)*/
