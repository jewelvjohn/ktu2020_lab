#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char ch;
    int characters, words, lines;
    file = fopen("text.txt", "r");
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
    }
    else
    {
        characters = words = lines = 0;
        while ((ch = fgetc(file)) != EOF)
        {
            characters++;
            if (ch == '\n' || ch == '\0')
            {
                lines++;
            }

            if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            {
                words++;
            }
        }
        if (characters > 0)
        {
            words++;
            lines++;
        }
        printf("\n");
        printf("Total characters = %d\n", characters);
        printf("Total words      = %d\n", words);
        printf("Total lines      = %d\n", lines);
    }
    fclose(file);
    return 0;
}