#include <stdio.h>

int main() {
    int a,b,max=0,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        if(max<b)
        max=b;
        if(b>140)
        count++;
    }
    printf("max heart rate:%d\n",max);
    printf("danger readings:%d\n",count);
    return 0;
}
