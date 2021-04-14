#include<stdio.h>
int main()
{   for(int i=1;i<=5;i++,printf("\n"))
    {
     for(int j=1;j<=5;j++){
       printf("%c ",i+64);
     }
    }
    return 0;
}
/*Output
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
*/
