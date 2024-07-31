// PROGRAM 5 : ASCENDING & DESCENDING OREDR USING ARRAY - (START) 
#include <stdio.h>
void main()
{
    int choice;

    printf("1. Ascending Order\n");
    printf("2. Descending Order\n");
    printf("3. Exit\n");

    while (1)
    {
        printf("\nEnter Choice : ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int a[10], i, j, temp, n;

            printf("Enter Length of Array : ");
            scanf("%d", &n);

            printf("Enter %d Integers : \n", n);
            for (i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }

            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (a[i] > a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            printf("Ascending Order\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\n", a[i]);
            }
        }

        else if (choice == 2)
        {
            int a[10], i, j, temp, n;

            printf("Enter Length of Array : ");
            scanf("%d", &n);

            printf("Enter %d Integers : \n", n);
            for (i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }

            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (a[i] < a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            printf("Descending Order\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\n", a[i]);
            }
        }
        else if (choice == 3)
        {
            printf("Thank You.");
            break;
        }
        else
        {
            printf("Enter Valid Choice!");
        }
    }
}
// PROGRAM 5 : ASCENDING & DESCENDING OREDR USING ARRAY - (END) 
