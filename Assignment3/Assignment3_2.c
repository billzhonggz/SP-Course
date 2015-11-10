#include <stdio.h>
int compareElements(float a, float b);
int main()
{
	//Guide users to input matrix row by row.
	printf("Please input a 4x4 matrix.\n");
	float matrix[4][4];
	printf("Please input the first row, divide each elements by \",\".\n");
	scanf("%f,%f,%f,%f", &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3]);
	printf("Please input the second row, divide each elements by \",\".\n");
	scanf("%f,%f,%f,%f", &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3]);
	printf("Please input the third row, divide each elements by \",\".\n");
	scanf("%f,%f,%f,%f", &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3]);
	printf("Please input the fourth row, divide each elements by \",\".\n");
	scanf("%f,%f,%f,%f", &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3]);
	
	//Initialize varibles which will be used below. 
	int row;
	int col;
	//This varible is used to recive return values from the function compareElements.
	int compareReturn = 0;
	int breakCount = 0;

	//Foreach array matrix. 
	for (row = 0, col = 3; row < 4, col >= 0; row++, col--)
	{
		//Call function to compare selected elements.
		compareReturn = compareElements(matrix[row][col], matrix[col][row]);
		//Judgement by each returns. Once there is a fail return 0, break the loop and print fail infomation. 
		if (compareReturn == 1)
		{
			printf("A judgement succeed.\n");
		}
		else if (compareReturn == 0)
		{
			printf("A judgement failed.\n");
			breakCount++;
		}	
	}
	if (breakCount == 0)
		printf("This martix is symmtery.\n");
	else
		printf("This martix isn't symmtery.\n");
	return 0;
}

//Compare elements. Same to return 1, different to return 0. 
int compareElements(float a, float b)
{
	if (a == b)
		return 1;
	else
		return 0;
}