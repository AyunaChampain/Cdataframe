#include <stdio.h>
#include "cdataframe.h"
#include "column.h"

int main() {
    int pos;
    int supp;
    int inf;
    int equal;
    int verif ;
    CDataframe Cdf;

    COLUMN *mycol = create_column("My column");
    int val = 5;
    int test = insert_value(mycol, val) ;
    if (test == 0)
        printf("Value added successfully to my column\n");
    else
        printf("Error adding value to my column\n");
    delete_column(&mycol);
    print_col(mycol);

    /*occur(mycol, val);
    pos = pos_val_col(mycol, val);
    supp = supp_x_col(mycol, val);
    inf = inf_x_col(mycol, val);
    equal = equ_x_col(mycol, val);


    Cdf = create_empty();
    enter_value(&Cdf);
    print_cdf(&Cdf);
    initialize(&Cdf);
    print_cdf(&Cdf);

    int lim = 2;
    print_limited_line(&Cdf, lim);
    print_limited_col(&Cdf, lim);

    int rank = 2;
    add_line(&Cdf);
    del_line(&Cdf, rank);
    add_col(&Cdf);
    del_col(&Cdf, rank);

    char title = (char) "TITLE";
    int line = 2;
    int col = 2 ;
    rename_title(&Cdf, rank, title);
    verif = exist(&Cdf, val);
    change_val(&Cdf, line, col);
    print_title(&Cdf);

    int nb_li ;
    int nb_col;
    int equ;
    int inferior;
    int sup;

    nb_li = print_nb_line(&Cdf);
    nb_col = print_nb_col(&Cdf);
    equ = print_equ(&Cdf, val);
    sup = print_sup(&Cdf, val);
    inferior = print_inf(&Cdf, val);*/
    return 0;
}
