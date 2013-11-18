#include <stdio.h>

int main(){
        int n, i = 2;
        double fac = 1, sum = 1;
        scanf("%i", &n);
        if(n >= 0 && n <= 20){
        if(n != 0 && n != 1){
                for(; i <= n; ++i){
                        fac = fac*i;
                        sum = sum + (1/fac);
                }
        }
        printf("%.52g", sum);
        }else{
                printf("error");
        }
        return 0;
}
