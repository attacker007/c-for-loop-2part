#include <stdio.h>

int main() {
    int a,b,sum=0,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        sum+=b;
        if(b>40)
        count++;
    }
    printf("total calls:%d\n",sum);
    printf("overload calls:%d\n",count);
    return 0;
}
