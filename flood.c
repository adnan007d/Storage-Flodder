#include<stdio.h>

int main()
{
        FILE *fptr;
        fptr = fopen("flood.txt","w");
        while (1)
        {
                fprintf(fptr,"%d",1);
        }

	fclose(fptr);
        return 0;
}
