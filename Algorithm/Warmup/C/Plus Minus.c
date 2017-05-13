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
    int arr[n];
    for(arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    int positive=0,negative=0,zero=0;
    float fpositive,fnegative,fzero;
    for(i=0;i<n;i++){
        if(arr[i]>0)
            positive++;
        else if(arr[i]<0)
            negative++;
        else
            zero++;
    }
    fpositive = (float)positive/n;
    fnegative = (float)negative/n;
    fzero = (float)zero/n;
    printf("%f\n%f\n%f",fpositive,fnegative,fzero);
    return 0;
}
