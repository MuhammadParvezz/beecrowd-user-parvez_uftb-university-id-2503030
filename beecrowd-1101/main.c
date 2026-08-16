#include<stdio.h>

int main()
{
    int m, n;
    while(1) {
        scanf("%d %d",&m, &n);
        if(m<=0 || n<=0) {
            break;
        }
        else{
            int temp=0, sum=0;
            if (m>n) {
                temp=m; m=n; n=temp;
            }
            for(int i=m; i<=n; i++) {
                printf("%d ",i);
                sum+=i;
            }
            printf("Sum=%d\n", sum);
        }
    }

    return 0;
}
