#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
int _putchar(char c);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *b);

char *cap_string(char *b);

char *leet(char *b);

char *rot13(char *s);

void print_number(int n);
#endif /* HOLBERTON_H */
