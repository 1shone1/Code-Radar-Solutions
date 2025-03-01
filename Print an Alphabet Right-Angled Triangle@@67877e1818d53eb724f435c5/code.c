#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    char b = 'A';
    for(i=0;i<a;i++){
        for(j=0;j<=i;j++){
            printf("%c ",b+j);
        }
        printf("\n");
    }
}