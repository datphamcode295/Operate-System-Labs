#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
clock_t tr_time, end_time;
float my_rand() {
    return -1 + ((float) rand() / (float) RAND_MAX) * 2;
}
int main(int argc, char *argv[]){
tr_time = clock();

int nPoints = atoi(argv[1]);
int count =0;
if (nPoints <= 0) {
        printf("Number points must more than 0\n");
        return 0;
    }
for(int i=0;i<nPoints;i++){
	float x = my_rand();
        float y = my_rand();
        count += (sqrt(x * x + y * y) <= 1);
}
float pi = 4 * (float) count / (float) nPoints;
end_time=clock();

    printf("PI = %.12f\n", pi);
    printf("Time to compute= %g second\n",(double)(end_time-tr_time)/CLOCKS_PER_SEC);
    
    return 0;

}
