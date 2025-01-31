#include <stdio.h>


int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a = a>>b;
    if(a&1==1){
        printf("%d",a);
    }
    else{
        printf("%d",a);
    }
    return 0;
}