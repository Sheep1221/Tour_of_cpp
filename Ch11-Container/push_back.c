#include <stdio.h>
#include <stdlib.h>

void push_back(int** vec, int* size, int val){
    (*size)++;
    int *temp = (int*)realloc(*vec, (*size)*sizeof(int));
    
    if (!temp) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    
    *vec = temp;
    (*vec)[(*size) - 1] = val;
}

int main(){
    int* arr;
    int* vec = NULL;
    int size = 0;
    int i = 0;
    arr = malloc(5*sizeof(int));

    for(i=0; i<5; ++i){
        arr[i] = i*10;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    for(i=0; i<5; ++i){
        push_back(&vec, &size, 10);
        printf("vec[%d] = %d; size = %d\n", i, vec[i], size);
    }
    free(arr);
    free(vec);
}
