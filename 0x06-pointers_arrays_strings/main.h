#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *tt);
char *leet(char *ra);
char *rot13(char *rr);
int _putchar(char r);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_hex(const char *b, int x, int y);
int is_printable(char c);
void print_text(const char *b, int x, int y);

#endif
