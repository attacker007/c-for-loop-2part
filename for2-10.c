#include<stdio.h>
int main(){
    int a,b,sum=0,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
    scanf("%d",&b);
    sum+=b;
    if(2<b)
    count++;
    }
    printf("total data:%d\n",sum);
    printf("high usage data:%d\n",count);
    return 0;
    

}
