#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x in lowercase
 *
 * Returns: Void
 *
 */
void print_alphabet_x10(void)
{
  int i = 0;

  while(i < 10)
  {
    char l;                                                                                                                                        
                                                                                                                                                       
        for (l = 'a'; l <= 'z'; l++)                                                                                                                   
        {                                                                                                                                              
                _putchar(l);                                                                                                                           
        }                                                                                                                                              
        _putchar('\n');
    i++;
  }
}

