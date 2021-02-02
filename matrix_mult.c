#include<stdio.h>

int main(void)
{
  int c, d, p, q, m, n, k, total = 0;
  int one[10][10], two[10][10], mul[10][10];

  printf("Enter rows and cols for first matrix:\t");
  scanf("%d%d", &m, &n);

  printf("Enter elements for first matrix: \n ");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &one[c][d]);
 
  printf("Enter rows and cols for second matrix:\t"");
  scanf(" %d %d", &p, &q);

  if (n != p)
    printf(" Your given matrices cannot be multiplied with each other. \n ");
  else
  {
    printf(" Insert your elements for second matrix \n ");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &two[c][d] );

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          total = total + one[c][k] * two[k][d];
        }
        mul[c][d] = total;
        total = 0;
      }
    }
 
    printf(" The result of matrix multiplication or product of the matrices is: \n "); 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d \t", mul[c][d] );
      printf(" \n ");
    }
  }