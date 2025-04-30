#include <stdio.h>
#include <stdlib.h>
int prime_check(int n){
    int i,j;

    if(n<=1){
        return 0;
    }

    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }


    return 1;
}
int main(){
    int num,result=0;
    scanf("%d",&num);
    result=prime_check(num);
    if(result){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
    return 0;
}
