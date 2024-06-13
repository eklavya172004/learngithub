#include<stdio.h>


int square(int x){
return x*x;
}

int main(){
    int S,Q;
    scanf("%d %d",&S,&Q);
    
    int sq_P= square(S);
    int sq_Q= square(Q);

    printf("%d %d\n",S,Q);
    printf("%d %d",sq_P,sq_Q);
}