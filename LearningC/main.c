#include <stdio.h>
#include <stdlib.h>

int main()
{
    char my_strings[50];
    scanf("%s", my_strings);

    //fgets(my_strings, 50, stdin);


    FILE * file_h = fopen("Output.txt","a");
    if(file_h == NULL) printf("ERROR");
    fprintf(file_h,"%s", my_strings);

    int i = strcmp(my_strings, "aaa");
    printf("Dlugosc: %d\n",i);





    printf("%s", my_strings);
    return 0;
}
