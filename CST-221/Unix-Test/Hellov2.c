#include <stdio.h>

int main()
{

char input[80];

printf("Input: \n");
scanf("%10[0-9a-zA-Z ]", input);


printf("Output: %s",input);

return(0);
}
