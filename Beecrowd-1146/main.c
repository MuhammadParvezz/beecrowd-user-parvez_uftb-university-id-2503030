#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    for(int i=1; ;i++){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        for(int n=1; n<=x; n++){
            if(n == x) {
                printf("%d", n);
            } else {
                printf("%d ", n);
            }
        }
        printf("\n");
    }
    return 0;
}
