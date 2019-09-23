#include <stdio.h>

main()
{
    int x, n;
	FILE *fl, *fl1;
    fl = fopen("test.txt", "r");
    fl1 = fopen("result.txt", "w+");
    if (fl == NULL)
    {
    	printf("[!!!] No such file with data...\n");
    	return 1;
	}
	
	while (n != -1)
	{
		n = fscanf(fl, "%d", &x);
		if (n == 0)
		{
			printf("\nError data! Not compatible format... \n");
			break;
		} 
		else
		    fprintf(fl1, "%d\n", x);
	}
	
	fclose(fl);
	fclose(fl1);
	getchar();	
}

