#include<stdio.h>
int main()
{   for(int i=1;i<=5;i++,printf("\n"))
    {
     for(int j=1;j<=5;j++){
       printf("%c ",j+64);
     }
    }
    return 0;
}
/*Output
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/
