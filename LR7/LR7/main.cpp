#include"task1.h"
#include"task2.h"

int main(void)
{
	void (*tasks) (void);
	int choice,end;
	do
	{
		printf("enter the task number. 1 or 2: ");
	    choice = numinputrange(1, 2);
		switch (choice)
		{
		case 1:
			tasks = task1;
			tasks();
			printf("\ndo you want to continue?\n1.yes\n2.no");
			end = numinputrange(1, 2);
			break;
		case 2:
			tasks = task2;
			tasks();
			printf("\ndo you want to continue?\n1.yes\n2.no");
			end = numinputrange(1, 2);
			break;
		}
	} while (end == 1);
	
}