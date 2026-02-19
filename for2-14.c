#include<stdio.h>
int main(){
    int a,b,sum=0,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        sum+=b;
        if(b>50000)
        count++;
    }
    printf("total revenue:%d\n",sum);
    printf("target days:%d\n",count);
    return 0;
}
