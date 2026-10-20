#include <stdlib.h>
#include <stdio.h>

char sOption = 0; // option to select
		  // note: CHAR because '' expects a character
		  // if a int would be used here (what definitely did not happen
		  // it will always jump to default
char fileName[256]; // fix 1: allocate instead of pointer

void drawMenu()
{
	printf("--------To-Do List Maker--------\n");
	printf("-------- Made by BlxrRLS -------\n");

	printf("1. Create New file\n");
	printf("2. Select File\n");
	printf("3. Write new Task to selected file\n");

	printf("Select a Option: ");
	scanf(" %c", &sOption);
	fflush(stdout); // make sure output will be flushed
}

void openFile()
{
	printf("Enter file name (with .txt): ");
	scanf("%255c", fileName); // fix 2: Limit the amount of input tp 255 to prevent buffer overflow
	fflush(stdout);
	FILE* pFptr; // create file pointer for FILE*
	pFptr = fopen(fileName, "w+");

	if (pFptr == NULL)
		printf("File %s does not exist\n", fileName);
		fileName[0] = '\0';
		return;

	printf("Opened %s\n", fileName);

}

void writeNewTask()
{
	if (fileName[0] == '\0');
			printf("No file Selected. Create or select one first!\n");
			return;

	FILE* pFptr = fopen(fileName, "a");

	char taskName[256]; // allocate 256 bytes for task name
	
	printf("Enter your task");
	scanf(" %[^\n]", taskName);

	fprintf(pFptr,"- %s\n",  taskName);

	fclose(pFptr);

	printf("Wrote to file successfully");
}

void CreateNewFile()
{
	printf("Enter the name of the new File: ");
	scanf(" %255c", fileName);

	FILE* pFptr = fopen(fileName, "w");

	fclose(pFptr);

	printf("Successfully created %255c", fileName);
}

int main()
{

	while (1){	

	drawMenu();

        // handle switch logic etc.

        switch (sOption)
        {
                case ('1'):
                        CreateNewFile();
                        break;
                case ('2'):
                        openFile();
                        break;
                case ('3'):
                        writeNewTask();
                        break;
                default:
                        printf("Not a valid Option\n");
                        break;
        	}
	}

}
