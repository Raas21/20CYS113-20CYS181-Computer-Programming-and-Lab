#include <stdio.h>

int main() {
    FILE *file;                     // Declare a pointer to a FILE structure
    char filename[100];             // Store the filename
    char content[1000];             // Store the content to be written to the file

    printf("Enter the filename: ");
    scanf("%99s", filename);        // Read the filename from the user

    // Open the file in "w" mode (write mode)
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    else{
    printf("Enter character to be found:\n");

    char ch, sch;
    int c=0;
    scanf(" %c", &sch);
    printf("%c\n", sch);
    while ((ch = fgetc(file)) != sch)
    {
    		c++;
    	
    	
    }
    printf("index of character is %d", c+1);
    }

    // Close the file
    fclose(file);

    return 0;
}
