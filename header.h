//
//  header.h
//  minesweeper
//
//  Created by Cajetan Perwein on 05/10/15.
//  Copyright © 2015 Cajetan Perwein. All rights reserved.
//

#ifndef header_h
#define header_h
#include <stdio.h>

int liesInt(int a, int b);
void fillbombs(int feld[][10], int s, int z, int bombs);
void printMatrix(int feld[][10], int z, int s);
int nachbarn(int tab[10][10], int z, int s, int i, int j);
void allNeigbours(int feld[10][10], int z, int s);
#endif /* header_h */
