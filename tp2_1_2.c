#include <stdio.h>
#include <time.h>

#define N 20

int main(){
    int i;
    double vt[N];
    double *pvt = vt;
    for(i = 0; i<N; i++){
        *pvt = 1 + rand() %100;
        printf("%.2f\n", *pvt);
        pvt++;
    }
    return 0;
}