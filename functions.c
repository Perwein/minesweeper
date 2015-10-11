//
//  functions.c
//  minesweeper
//
//  Created by Cajetan Perwein on 05/10/15.
//  Copyright © 2015 Cajetan Perwein. All rights reserved.
//

#include "header.h"
int liesInt(int a, int b)


{
    
    char ein[10];
    int wert, ok;
    char z;
    
    do
    {
        gets(ein);
        ok = sscanf(ein, "%d%c", &wert, &z);
        if(ok!=1 || wert<b || wert>a)
        {
            printf("\nWrong input!  The number must be bigger than %d and lower than %d\n", b, a);
        }
    }
    while(ok != 1 || wert<b || wert>a);
    return wert;
}

void fillbombs(int feld[10][10], int s, int z, int bombs)
{
    
    int a, b, i;
    
    for(i=1; i<=bombs; i++)
    {
        a=rand()%s;
        b=rand()%z;
        
        if(feld[a][b]!=-1){
            
            feld[a][b]=-1;
            
        } else {
            i--;
        }
        
    }
    
}






void printMatrix(int feld[10][10], int z, int s)
{
    
    int i, j;
    
    for(i=0; i<z; i++)
    {
        for(j=0; j<s; j++)
        {
            if(feld[i][j]==-1){
                printf("  X");
            } else {
                printf("%3d", feld[i][j]);
                
            }
        }
        putchar('\n');
    }
}

int nachbarn(int tab[10][10], int z, int s, int i, int j)
{
    int a, b, sum = 0;
    
    for(a=i-1; a<=i+1; a++)
    {
        for(b=j-1; b<=j+1; b++)
        {
            if((a!=i || b!=j) && a>=0 && b>=0 && a<z && b<s)
            {
                if(tab[a][b] == -1){
                    sum ++;
                }
            }
        }
        
    }
    return sum;
}


void allNeigbours(int feld[10][10], int z, int s)
{
    
    int i,j;
    
    for(i=0; i<z; i++)
    {
        for(j=0; j<s; j++)
        {
            if(feld[i][j]!=-1){
                feld[i][j] = nachbarn(feld, z, s, i, j);
            }
            
        }
    }
}
