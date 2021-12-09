#include <stdio.h>

 
void abcd(int number)
{
    if (number % 3 == 0 && number % 5 == 0)
        printf("Zoom\n");
    else if (number % 3 == 0)     
        printf("Zip\n");
    else if (number % 5 == 0)       
        printf("Zap\n");
    else
        printf("Invalid number!\n"); 
}
 
// Driver code
int main()
{
     
    // Calling function
    abcd(7);
    abcd(6);
    abcd(5);
    abcd(30);
     
    return 0;
}
