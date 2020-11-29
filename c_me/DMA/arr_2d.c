/*
#include<stdio.h>
int i,j,rows,cols;
	int main()
			{
				int **ptr;
				printf("enter rows and columns for 2d array");
				scanf("%d%d", &rows, &cols);
				ptr = (int**)malloc(rows * sizeof(int*));
				for(i=0; i<rows; i++)
					ptr[i] = (int*) malloc(cols * sizeof(int));
				input(ptr, rows, cols);
				display(ptr, rows, cols);
				for(i=0; i<rows; i++)
					free(ptr[i]);
				free(ptr);
			}
			void input(int **ptr, int rows, int cols)
			{
				printf("insert elemnts in array");
				for(i=0; i<rows; i++)
				{
					for(j=0; j<cols; j++)
						scanf("%d", &ptr[i][j]);
				}
			}
			void display(int **ptr, int rows, int cols)
			{
				for(i=0; i<rows; i++)
				{
					for(j=0; j<cols; j++)
						printf("%d\t", ptr[i][j]);
					printf("\n");
				}
			}
*/
