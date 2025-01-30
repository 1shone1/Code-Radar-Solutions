#include <stdio.h>
int min(){
    int a;
    scanf("%d",&a);
    if(a&1==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}