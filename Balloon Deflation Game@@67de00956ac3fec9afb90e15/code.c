#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void deflateBalloons(int balloons[], int n) {
    
    qsort(balloons, n, sizeof(int), compare);

    int prev_sub = 0;
    int count = n; 

   
    for (int i = 0; i < n; i++) {
        
        if (balloons[i] > prev_sub) {
           
            int current_min = balloons[i] - prev_sub;
            printf("%d\n", count); 
        }
        count--; 
    }
}

