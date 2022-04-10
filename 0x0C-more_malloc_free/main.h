#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int is_digit(char *s);
int _strlen(char *s);
void errors(void);
int main(int argc, char *argv[]);
  
int _putchar(char c);
int _atoi(const char *s);
void print_int(unsigned long int n);
void _puts(char *str);

int _strlen(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int onlyNumbers(char *c);
void multiply(char* s1, char* s2);
