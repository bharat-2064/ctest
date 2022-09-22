#include <stdio.h>
#include <string.h>
int A(char *arg)
{
    printf("A-");
    //printf("%d",strcmp(arg, "TRUE"));
    return !strcmp(arg, "TRUE");
}
int B(char *arg)
{
    printf("B-");
    //printf("%d",strcmp(arg, "TRUE"));
    return !strcmp(arg, "TRUE");
}
int C(char *arg)
{
    printf("C-");
    //printf("%d",strcmp(arg, "TRUE"));
    return !strcmp(arg, "TRUE");
}
int D(char *arg)
{
    printf("D-");
    //printf("%d",strcmp(arg, "TRUE"));
    return !strcmp(arg, "TRUE");
}
void main(int argc, char **argv)
{
    
    //printf("%d",A(argv[1]));
    //printf("%d",B(argv[2]));
    //printf("%d",C(argv[3]));
    //printf("%d",D(argv[4]));
 if ((A(argv[1]) || B(argv[2])) && (C(argv[3]) || D(argv[4])))
     {
        printf("TRUE\n");
    }
    else 
    {
        printf("FALSE\n");
    }
}
