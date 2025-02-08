#include <stdio.h>


int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(Valid triangle(a,b,c)){
        printf("Valid");
    }
    else{
        printf("Invalid")
    }
    return 0;
}