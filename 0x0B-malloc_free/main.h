#ifndef MAIN_H
#define MAIN_H

int _strlen(char *s);
char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
