/* 
 * File:   main.c
 * Author: Grupo 3
 *
 * Created on October 9, 2020, 4:25 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_ARG 50

void save (char** p, char arr[MAX_ARG], int i);
int read (char** p, int i);

/*
 * 
 */
int main (int argc, char* argv[])
{   
    int i;
    int val;
    char claves [MAX_ARG]; // val = 0
    char valores [MAX_ARG];// val = 1
    char param [MAX_ARG]; // val = 2
    int c;
    
    for (i = 1; i < argc; i++)
    {
        val = read (argv, i);
        switch (val)
        {
            case 0:
                save (argv, claves, i);       
                break;
            case 1:
                save (argv, valores, i);
                break;
            case 2:
                save (argv, param, i);
                break;
            default:
                break;
        }
    }
    

    for (c = 0; c<5; c++ )
    {    
        printf ("%c", claves[c]);
    }
    printf("\n");
    for (c = 0; c<5; c++ )
    {    
        printf ("%c", valores[c]);
    }
    printf("\n");
    for (c = 0; c<5; c++ )
    {    
        printf ("%c", param[c]);
    }
    printf("\n");
    
    
    return (EXIT_SUCCESS);
}

int read (char** p, int i)
{
    char c;
    int val;
    
    if ((c = p[i][0]) == '-')
    {
        val = 0;
    }
    else if ((c = p[i-1][0]) == '-')
    {
        val = 1;
    }
    else 
    {
        val = 2;
    }
    return val;
}     

void save (char** p, char arr[MAX_ARG], int i)
{
    int j;
    
    for (j = 0; *(p[j]) != '\0' ; j++)
    {
        arr[j] = p [i][j];
    }
}

