main.h

#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *d);
void print_binary(unsigned long int t);
int get_bit(unsigned long int t, unsigned int index);
int set_bit(unsigned long int *t, unsigned int index);
int clear_bit(unsigned long int *t, unsigned int index);
unsigned int flip_bits(unsigned long int t, unsigned long int u);
int _atoi(const char *f);
int _putchar(char b);
int get_endianness(void);

#endif
