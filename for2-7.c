#include<stdio.h>
int main(){
    int a,b,sum=0,count=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        sum+=b;
        if(b>50)
        count++;
    }
    
    
    printf("total rain days:%d\n",sum);
    printf("heavy rain days:%d\n",count);
    return 0;
    

}
