#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",a);
    char b ='A';
    for(i=a;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c ",b+j-1);
        }
        printf("\n");
    }
}