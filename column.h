//
// Created by ayuna on 19/04/2024.
//

#ifndef PROJETCEFREI_COLUMN_H
#define PROJETCEFREI_COLUMN_H
#define REALOC_SIZE 256

typedef struct
{
    char * titre ;
    int TP ;
    int TL ;
    int val[256] ;
}COLUMN;


COLUMN *create_column(char* title);
int insert_value(COLUMN* col, int value);
void delete_column(COLUMN **col);
void print_col(COLUMN* col);

int occur(COLUMN* col, int x);
int pos_val_col(COLUMN* col, int x);
int supp_x_col(COLUMN* col, int x);
int inf_x_col(COLUMN* col, int x);
int equ_x_col(COLUMN* col, int x);


#endif //PROJETCEFREI_COLUMN_H
