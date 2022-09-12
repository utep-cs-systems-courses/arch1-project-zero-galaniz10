#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
 
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}
void print_arrow(int leftCol, int size, int leftCol2, int size2)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
   int i2, j2;                                           
   int endCol = leftCol2 + size2;                        
   for (int row2 = 0; row2 < size2; row2++){                                                               
     int col2;                                          
     for (col2 = 0; col2 < leftCol2; col2++) putchar(' '); 
     for (         ; col2 < endCol;  col2++) putchar('*'); 
     putchar('\n');                                    
   }                                                   
}
