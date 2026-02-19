#include<stdio.h>
int main()
{
    int initialcash,N;
    int withdrawal;
    int riskcount = 0;
    scanf("%d",&initialcash);
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&withdrawal);
        initialcash-=withdrawal;
        if(initialcash<5000){
            riskcount++;
        }
    }
    printf("remaining cas:%d\n",initialcash);
    printf("riskcount:%d\n",riskcount);
    return 0;
    
}
