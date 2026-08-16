#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y, temp=0;
    scanf("%d %d",&x, &y);

    if(x>y){
        temp=x; x=y; y=temp;
    }
    for(int i=x+1; i<=y-1; i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }
    return 0;
}
