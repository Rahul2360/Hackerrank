#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,a_i,i,a_j,j;
    scanf("%d",&n);
    int a[n][n];
    for(a_i = 0; a_i < n; a_i++){
       for(a_j = 0; a_j < n; a_j++){

          scanf("%d",&a[a_i][a_j]);
       }
    }
    int sum1=0,sum2=0,total=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)
                sum1+=a[i][j];
    }}
    for(i=0;i<n;i++){
        sum2+=a[i][n-1-i];
    }
    total=abs(sum1-sum2);
    printf("%d\n",total);
    return 0;
}
