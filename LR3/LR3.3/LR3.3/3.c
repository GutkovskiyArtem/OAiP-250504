#include <stdio.h> 
#define n 30
#define chek if (ch!=1){printf("error");return 0;}
int main()
{
    int array1[100], array2[100], i,choice,ch;
    char str[100] ;
    printf("1.manual input\n2.random input\n");
    
    ch = scanf_s("%d", &choice);
    chek
        if (choice==2)
        {
            for ( i = 0; i < n; i++)
            {
                array1[i] = rand() % 10;
                array2[i] = rand() % 10;
            }
            printf("first nmber = ");
            for ( i = 0; i < n; i++)
            {
                printf("%d", array1[i]);
            }
            printf("\nsecont number = ");
            for (i = 0; i < n; i++)
            {
                printf("%d", array2[i]);
            }
            goto process;
        }
    while (getchar() != '\n');
    printf("enter the first number: ");
    gets(str);
    for (i = 0; i < n; i++)
    {
        if (str[i] > '9' || str[i] < '0')
        {
            printf("wrong input");
            exit(1);
        }

    }
        for (i = 0; i < n; i++)
        {
            array1[i] = str[i] - '0';
        }
    printf("enter the second number: ");
    gets(str);
    for (i = 0; i < n; i++)
    {
        if (str[i] > '9' || str[i] < '0')
        {
            printf("wrong input");
            exit(1);
        }

    }
        for (i = 0; i < n; i++)
        {
            array2[i] = str[i] - '0';
        }
        process:
        for ( i = 0; i < n; i++)
        {
            if (array1[i]>array2[i])
            {
                    goto positive;
            }
            else if (array1[i]<array2[i])
            {
                    goto negative;
            }
        }
        positive:
        for (i = n-1; i >= 0; i--)
        {
            array1[i] = array1[i] - array2[i];
            if (array1[i] < 0)
            {
                array1[i] += 10;
                array1[i - 1]--;
            }
        }
        printf("\nresult = +");
        for (i = 0; i < n; i++)
        {
            printf("%d",array1[i]);
        }
        return 0;
        negative:
        for (i = n-1; i >= 0; i--)
        {
            array2[i] = array2[i] - array1[i];
            if (array2[i] < 0)
            {
                array2[i] += 10;
                array2[i - 1]--;
            }
        }
        printf("\nresult =-");
        for (i = 0; i < n; i++)
        {
           printf("%d",array2[i]);
        }
}

