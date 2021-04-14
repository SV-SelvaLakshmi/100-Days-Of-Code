#include<stdio.h>
int main()
{   for(int i=5;i>=1;i--,printf("\n"))
    {
     for(int j=5;j>=1;j--){
       printf("%d ",i);
     }
    }
    return 0;
}
/*Output
5 5 5 5 5
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
*/
