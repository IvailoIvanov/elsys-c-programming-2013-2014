#include <stdio.h>

int main(){
int l=1, n=1, i, j, figure, number;
int a[11];

scanf ("%d", &number);
for (i=10; i>=0; i--){
 a[i]=number % 10;
 number=number / 10;
}
i=1;
while (n<=10){
figure=a[n];
for (i=n+1; i<=10; i++){
 if ((a[n]==a[i])&&(a[i]!=100)){l++; a[i]=100;}
}
if (l>1) {printf("%d:%d\n", figure, l);}
n++;
l=1;
}
return 0;
}
