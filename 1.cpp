#include <stdio.h>

char p1 [8][6]={{'6','3','D','6','3','U'},{'6','0','D','6','0','U'},{'1','E','D','1','E','U'},{'6','4','D','6','4','U'},{'1','3','D','1','3','U'},{'1','5','D','1','5','U'},{'1','4','D','1','5','U'},{'1','6','D','1','6','U'}};
int i = 0;
int j = 0;
int main ()
{
	for(j=0;j<8;j++)

  {
         printf("start\n"); 
    for(i=0;i<6;i++)
  {
            
            
printf(" p1[%d][%d] = %c \n",i,j, p1[j][i]);

}
}
}
