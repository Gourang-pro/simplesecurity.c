#include <stdio.h>

#define PASSWORD "3031"

int main()
{
    char input[20];
    int attempts = 0;

    printf("Welcome to the lock program.\n");

    do 
    {
        printf("Enter the password: ");
        scanf("%s", input);
        attempts++;

        if
         (strcmp(input, PASSWORD) == 0) 
         {
            printf("Access granted.\n");
            return 0;
        }
        else
         {
            printf("Access denied.\n");
        }
    }
     while (attempts < 3);

    printf("Maximum attempts reached. The program will now exit.\n");
    
    return 1;

}
