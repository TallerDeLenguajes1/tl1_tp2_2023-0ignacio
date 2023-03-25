#include <stdio.h>
#include <time.h>

#define N 20
#define M 20

int main(){
    int i, j;
    double vt[N][M];
    double *pvt = &vt[0][0];
    srand(time(NULL));
    for(i = 0; i < N; i++){
        for(i = 0; i < M; j++){
            *(pvt + i * M + j) = 1 + rand() %100;
            printf("%.2f\t", *(pvt + i *M + j));
        }
        printf("\n");
    }
    return 0;
}

