#include <stdio.h>

int main()
{
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    char ch;

    // Get file names from user
    printf("Enter the source file name: ");
    scanf("%s", sourceFile);

    printf("Enter the destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL)
    {
        printf("Error! Could not open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL)
    {
        printf("Error! Could not create destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    // Close files
    fclose(source);
    fclose(dest);

    return 0;
}