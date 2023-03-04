// #include <stdio.h>

// int main()
// {

//     int num;

//     FILE *ptr = fopen("Demo.txt", "r");

//     for (int i = 0; i < 4; i++)
//     {
//         fscanf(ptr, "%d", &num);

//         printf("Num Is = %d\n", num);
//     }
    
//     return 0;
// }
//!-----------------------------------------------------------------
//? Writing In File

#include<stdio.h>

int main()
{

    FILE *ptr = fopen("Demo.txt","r");
    int num;

    fprintf(ptr,"%d\n",89);
    fprintf(ptr,"%d\n",35);
    fscanf(ptr,"%d",&num);

    return 0;
}











