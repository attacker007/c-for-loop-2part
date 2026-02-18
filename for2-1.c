#include<stdio.h>
int main(){
    int n,exp,sum=0,count=0;
    scanf("%d",&n);
    for( int i=1;i<=n;i++){
        scanf("%d",&exp);
        sum=sum+exp;
        if(exp>=1000)
        count++;
    }
    printf("total expense:%d\n",sum);
    printf("overspend days:%d",count);
    return 0;
}
