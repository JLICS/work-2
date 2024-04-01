#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double **plus ( int N, int M, double **m, double **matrix2){
    double **matrix3 = (double **)malloc(N * sizeof(double *)); 
    for (int i=0;i<N; i++){
    matrix3[i] = (double *)malloc(N * sizeof(double));
    }
    if (N==M){
        for(int i =0;i<N;i++)
            for(int g =0;g<N;g++){
                matrix3[i][g]=m[i][g]+matrix2[i][g];
            }
    }
        return matrix3;
}

