#include<stdio.h>


int square(int x){
return x*x;
}

int main(){
    int P,Q;
    scanf("%d %d",&P,&Q);
    
    int sq_P= square(P);
    int sq_Q= square(Q);

    printf("%d %d\n",P,Q);
    printf("%d %d",sq_P,sq_Q);
}