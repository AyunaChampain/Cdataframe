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
    int valeur1;
    valeur1 = col -> val[x];
    return valeur1;
}

int supp_x_col(COLUMN* col, int x)
{
    int y;
    int CptSup = 0;
    int value2;
    for(y = 0; y < REALOC_SIZE ; y++)
    {
        value2 = col -> val[y];
        if (value2 > x)
        {
            CptSup++;
        }
    }
    return CptSup ;
}


int inf_x_col(COLUMN* col, int x)
{
    int z;
    int cptInf = 0;
    int value3;
    for(z = 0; z < REALOC_SIZE ; z++){
        value3 = col -> val[z];
        if (value3 < x){
            cptInf++;
        }
    }
    return cptInf;
}
/*int equ_x_col(COLUMN* col, int x) même fonction*/
