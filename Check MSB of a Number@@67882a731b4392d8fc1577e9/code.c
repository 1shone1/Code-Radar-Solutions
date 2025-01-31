#include <stdio.h>


int main() {
    int a,b;
    scanf("%d",&a);
    b = a>>31;
    if(a&b==-1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}