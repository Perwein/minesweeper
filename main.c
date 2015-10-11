//
//  main.c
//  minesweeper
//
//  Created by Cajetan Perwein on 05/10/15.
//  Copyright © 2015 Cajetan Perwein. All rights reserved.
//


#include "header.h"


int main(void) {
    


    int ar[10][10]={0,};
    int zeilen, spalten, bombs;



    printf("\nEnter rows -> ");
    zeilen=liesInt(11, 2);
        
        
    printf("\nEnter colums -> ");
    spalten=liesInt(11, 2);
        
        
    printf("\nEnter bombs -> ");
    bombs=liesInt((zeilen*spalten)/2, 1);
        
        
    fillbombs(ar, zeilen, spalten, bombs);
    allNeigbours(ar, zeilen, spalten);
    printMatrix(ar, zeilen, spalten);




}


