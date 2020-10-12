/* 
 * File:   main.c
 * Author: Grupo 3
 *
 * Created on October 9, 2020, 4:25 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_ARG 50

int save (char** p, char** arr, int i, int cont); 
/* la funcion recibe el puntero a argv, el arreglo donde se
 * guardan las palabras, el indice que marca en que palabra del
 * arreglo argv estamos y el indice que marca donde debe guardarse 
 * la palabra que estamos recibiendo de argv. 
*/
 int read (char** p, int i);

/*
 * 
 */
void print (char** clavv, char** vall, char** parr, int par, int num);



int main (int argc, char* argv[])
{   
    int i;
    int val;
    char* claves [argc]; // val = 0
    char* valores [argc];// val = 1
    char* param [argc]; // val = 2
    int contval=0, contclave=0, contparam=0;
    
    for (i = 1; i < argc; i++)
    {
        val = read (argv, i);
        switch (val)
        {
            case 0:
                contclave=save (argv, claves, i, contclave);       
                break;
            case 1:
                contval=save (argv, valores, i, contval);
                break;
            case 2:
                contparam=save (argv, param, i, contparam);
                break;
	    default:
		break;
	
        }

	
    }
    print (claves, valores, param, contparam, contclave);
 

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

int save (char** p, char** arr, int i, int cont) //
{
        arr[cont] = p[i]; //copia la palabra del argv al arreglo correspondiente 
	cont++;
        return cont;
}

void print (char** clavv, char** vall, char** parr, int par, int num)
{
	int op=1;
	
	for (op=1; op<=num; op++)
	{
            printf ("opcion %d: clave: %s valor: %s \n", op, clavv[op-1], vall[op-1]);
	}
	for (op=1; op<=par; op++)
	{
            printf ("parametro %d: %s \n", op, parr[op-1]);
	}
}

