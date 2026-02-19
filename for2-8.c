#include<stdio.h>
int main(){
    int a,b,sum=0,count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        sum+=b;
        if(b<100)
        count++;
    }
    printf("total loss:%d\n",sum);
    printf("high loss days:%d\n",count);
    return 0;
    

}
