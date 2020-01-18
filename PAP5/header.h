#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int sequent_search(int angka, int data[], int jml_data);
int is_inverse(int list1[], int list2[], int jml_data);
void min_max(int data[], int jml_data, int *min, int *max);
int min_max_gap(int data[], int jml_data);
int at_least(char huruf, int jml, char teks[]);

int minim,maxi;
bool ngecek;

#endif // HEADER_H_INCLUDED
