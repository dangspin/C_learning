#include <stdio.h>

int main()
{
    int a = 1;
    int *pa = &a;
    int *ptest = NULL;
    int *pb = NULL;
    
    ptest = pa;
    
    printf("The number of a is: %d\n",a);
    printf("The address of a is: %d\n", &a);
    printf("The address that stored in pa is: %d\n", pa);
    
    printf("The value attached to pa is: %d\n", *pa);
    printf("The value attached to ptest is: %d\n", *ptest);
    printf("The address stoed in ptest is %d\n", ptest);
    
    printf("The address of pa is %d, the address of ptest is %d\n", &pa, &ptest);
    
    printf("---------------------------------------------\n");
    
    *ptest = a + 1;
    
    printf("The number of a is: %d\n",a);
    printf("The address of a is: %d\n", &a);
    printf("The address that stored in pa is: %d\n", pa);
    
    printf("The value attached to pa is: %d\n", *pa);
    printf("The value attached to ptest is: %d\n", *ptest);
    printf("The address stoed in ptest is %d\n", ptest);
    
    printf("---------------------------------------------\n");
    
    
    printf("The address to pb is %d\n", pb);
    pb = pa + 1 - 1;
    printf("The address to pb is %d\n", pb);
    printf("The value to pb is %d\n", *pb);
    printf("The address of pb is %d\n", &pb);
    
    return 0;
}
