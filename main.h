#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


#define MAX_BYTE 31


void _putchar(int c, int *counter);
void print_str(char *str, int *counter);
void print_int_recursive(unsigned int n, int *counter);
void print_int(int n, int *counter);
void print_u_int(unsigned int n, int *counter);
void _unsupported(char c, int *counter);
void print_hexl(unsigned int, int *counter);
void print_hexu(unsigned int, int *counter);
void print_binary(unsigned int n, int *counter);

int _format(const char *format, va_list args, int *counter);
int _printf(const char *format, ...);

void print_r_str(char *str, int *counter);

#endi
