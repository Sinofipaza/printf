#ifndef MAIN_H
#define MAIN_H
#define BUFSIZE 1024
#include <stdarg.h>

int _printf(const char *format, ...);
char *(*get_spec_func(char s))(va_list);
char *found_none(char c);
int alloc_buffer(char *hold, int hlen, char *buffer, int size, double *total);
int _strlen(char *s);
char *chartos(char c);
char *char_find(va_list c);
char *string_find(va_list s);
char *percent_find(void);
char *int_find(va_list npoint);
char *unsigned_find(va_list unsign);
void _puts(char *buffer, int size);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);
char *rev_find(va_list s);
char *rot13_find(va_list s);
char *binary_find(va_list n);
char *octal_find(va_list n);
char *hex_find(va_list n);
char *HEX_find(va_list n);
char *address_find(va_list n);
char *rev_string(char *a, int n);

/**
 * struct spec_types - Struct gets function of specifier
 * @spec: specifier
 * @f: The function
 */

typedef struct spec_types
{
	char *spec;
	char *(*f)();
} s_types;

#endif
