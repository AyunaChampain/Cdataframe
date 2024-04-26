//
// Created by ayuna on 19/04/2024.
//

#ifndef PROJETCEFREI_CDATAFRAME_H
#define PROJETCEFREI_CDATAFRAME_H
#define REALOC_SIZE 256

typedef struct
{
    int* col[REALOC_SIZE];
}CDataframe;

enum enum_type
        {
                NULLVAL = 1 , UINT, INT, CHAR, FLOAT, DOUBLE, STRING, STRUCTURE
        };
typedef enum enum_type ENUM_TYPE;

union column_type{
    unsigned int uint_value;
    signed int int_value;
    char char_value;
    float float_value;
    double double_value;
    char* string_value;
    void* struct_value;
};
typedef union column_type COL_TYPE ;



CDataframe create_empty();
void enter_value(CDataframe* Cdf);
void initialize(CDataframe * Cdf);

void print_cdf(CDataframe* Cdf);
void print_limited_line(CDataframe* Cdf, int lim);
void print_limited_col(CDataframe* Cdf, int lim);

void add_line(CDataframe* Cdf);
void del_line(CDataframe* Cdf, int rank);
void add_col(CDataframe* Cdf);
void del_col(CDataframe* Cdf, int rank);

void rename_title(CDataframe*Cdf, int rank,  char title);
int exist(CDataframe* Cdf, int val);
void change_val(CDataframe* Cdf, int line, int col);
void print_title(CDataframe* Cdf);

int print_nb_line(CDataframe* Cdf);
int print_nb_col(CDataframe* Cdf);
int print_equ(CDataframe* Cdf, int x);
int print_sup(CDataframe* Cdf, int x);
int print_inf(CDataframe* Cdf, int x);

#endif //PROJETCEFREI_CDATAFRAME_H
