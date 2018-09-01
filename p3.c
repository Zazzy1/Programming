#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input rows to print from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        /*for(j=1; j<i; j++)
        {
            printf(" ");
        }*/

        /* Print hollow inverted right triangle */
        for(j=i; j<=rows; j++)
        {
            /*
             * Print star for ith column(j==i),
             * last column(j==rows) and for
             * first row(i==1).
             */
            if(j==i || j==rows || i==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
