#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct
{
char dname[10],fname[10][10];
int fcnt;
}
dir;

void main()
{
	int i, ch;
	char f[30];
	dir.fcnt = 0;
	printf("\n Enter name of the Directory -- ");
	scanf("%s",dir.dname);
	while(1)
	{
		printf("\n\n 1. Create File \t 2.Delete File \t 3.Search File \n 4.Display Files \t 5.Exit\n Enter your Choice -- ");
		scanf("%d", &ch);
		
		switch (ch)
		{
			case 1: printf("\n Enter the name of the file --");
			scanf("%s",dir.fname[dir.fcnt]);
			dir.fcnt++;
			break;

			case 2: printf("\n Enter the name of the file --");
			scanf("%s",f);
			for(i = 0; i < dir.fcnt; i++)
			{
				if(strcmp(f, dir.fname[i]) ==0)
				{
					printf("File %s is deleted",f);
					strcpy(dir.fname[i],dir.fname[dir.fcnt-1]);
					break;
				}
			}
		
				if(i == dir.fcnt)
				printf("File %s not found",f);
				else
				dir.fcnt--;
				break;
				
			case 3: printf("\n Enter the name of the file --");
			scanf("%s",f);
			for(i = 0; i < dir.fcnt; i++)
			{
				if(strcmp(f, dir.fname[i])== 0)
				{
					printf("File %s is found",f);
					break;
				}
			}
				if(i == dir.fcnt)
				printf("File %s not found",f);
				break;
				
			case 4: if(dir.fcnt == 0)
				printf("\n Directory Empty");
				else
				{
					printf("\n The Files are --");
					for(i = 0; i < dir. fcnt; i++)
					 printf("\t%s", dir.fname[i]);
				}
				break;
				default: exit(0);
		}
	}
}
