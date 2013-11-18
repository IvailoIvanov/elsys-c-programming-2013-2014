#include <stdio.h>

int main(){
int first[4][4], second[4][4];
int a,b,r;

      for (a=0; a<4; a++)
      {
        for (b=0; b<4; b++)
        {
          scanf("%d", &first[a][b]);
        }
      }

      for (a=0; a<4; a++)
      {
        for (b=0; b<4; b++)
        {
           second[b][a]=first[a][b];
        }
      }

      for( a = 0 ; a < 4 ; a++ )
      {
        for( b = 0 ; b < 4 ; b++ )
        {
           printf("%d\t",second[a][b]); 
        }  
       printf("\n");
      }

return 0;
}
