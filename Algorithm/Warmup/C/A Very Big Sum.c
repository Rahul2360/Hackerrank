#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,arr_i,i;
    scanf("%d",&n);
    long int arr[n];
    for(arr_i = 0; arr_i < n; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    long int sum;
    for(i=0;i<n;i++)
        sum+=arr[i];
    printf("%ld",sum);
    return 0;
}
