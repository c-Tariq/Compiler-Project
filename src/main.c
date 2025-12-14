#include "../include/global.h"
#include "../include/Init.h"
#include "../include/Parse.h"
FILE *input, *output, *err;


int main()
{

    output = fopen("output/outputFile.txt", "w");
    err = fopen("output/outputFile.err", "w");
    input = fopen("input/inputFile.exp","r");

    if(input == NULL)
    {
        printf("the file input doesnt exist");
        return 1;
    }
    
    init();
    parse();
    fclose(output);
    fclose(err);
    fclose(input);

    return 0;
}

