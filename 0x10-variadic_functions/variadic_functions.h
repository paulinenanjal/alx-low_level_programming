#ifndef _VARIADIC_FUNCS_H
#define _VARIADIC_FUNCS_H

#define NIL "(nil)"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *  * sum_them_all - sum all params
 *   * @n: num of params
 *    *
 *     * Return: sum
 */

int sum_them_all(const unsigned int n, ...);

/**
 *  * print_numbers - print numbers
 *   * @separator: separator
 *    * @n: num of params
 *     *
 *      * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 *  * print_strings - print strings
 *   * @separator: separator
 *    * @n: num of params
 *     *
 *      * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...);

#endif
