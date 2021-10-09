#include <stdio.h>
int main()
{
 int nA = 0;
 int nB = 0;
 scanf("%d", &nA);
 scanf("%d", &nB);

 int nC = (nA > nB) ? 1 : 0; 
 printf("A value is %d\n", nA); 
 printf("B value is %d\n", nB);
 printf("C value is %d\n", nC);
 return 0;
}
