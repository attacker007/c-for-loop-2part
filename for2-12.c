#include<stdio.h>
int main(){
    int a,b,max=0,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        if(max<b)
        max=b;
        if(b>100)
        count++;
        
    }
    printf("highest price:%d\n",max);
    printf("high pricce days:%d\n",count);
}
