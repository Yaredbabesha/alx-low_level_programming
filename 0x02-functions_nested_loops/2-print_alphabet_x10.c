#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
/**
  * print_alphabet_x10 - repeats the print_alphabet 10 times.
  * Return: Nothing.
  */
void print_alphabet_x10(void)
{
     int i;
     char c;

     for (i = 0; i < 10; ++i)
    {
         for (c = 'a'; c <= 'z'; c++)
           {
              -putchar(c);
           }
             -putchar('\n');
        }
}