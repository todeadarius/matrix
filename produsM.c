#include<stdio.h>

int main()
{
    // citire 
    int a[20][20], b[20][20], rez[20][20];
    
    int n1, m1, n2, m2;
    int i, j, k;
    
    printf("Dimensiune matrice 1:\n");
    scanf("%d%d", &n1, &m1);
    printf("Elemente matrice 1:\n");
    for(i = 0;i < n1;i ++)
        for(j = 0;j < m1;j ++) {
            scanf("%d", &a[i][j]);
            a[i][j] = 0;
            }
    printf("Dimensiune matrice 2:\n");
    scanf("%d%d", &n2, &m2);
    printf("Elemente matrice 2:\n");
    for(i = 0;i < n2;i ++)
        for(j = 0;j < m2;j ++){
            scanf("%d", &b[i][j]);
            b[i][j] = 0;
            }
            
    // verificare dimensiune
    if(m1 != n2) {
        printf("matricele nu pot fi inmultite!");
        return 0;
    }
    int s;
    // inmultire matrice
    for(i = 0;i < n1;i ++)
        for(j = 0; j < m1;j ++)
        {
        	s = 0;
            for(k = 0; k < m2; k ++)
                s += a[i][k] * b[k][j];
            rez[i][j] = s;
        }      
    // afisare matrice rezultat
    printf("Matricea rezultat este: \n");
    for(i = 0;i < n1;i ++)
    {
        for(j = 0;j <= m2;j ++)
            printf("%d ", rez[i][j]);
        printf("\n");
    }
   return 0;
}
