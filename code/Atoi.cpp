#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>   
int main()  
{  
    int val;  
    char string1[20] = "99898989";  
    val = atoi(string1);  
    printf("String value = %s\n", string1);  
    printf("Integer value = %d\n", val);  
    char string2[] = "Javatpoint";  
    val = atoi(string2);  
    printf("String value = %s\n", string2);  
    printf("Integer value = %d\n", val);  
    return (0);  
}  

// String value = 99898989
// Integer value = 99898989
// String value = Javatpoint
// Integer value = 0