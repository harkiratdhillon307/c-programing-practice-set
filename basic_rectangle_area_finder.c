#include <stdio.h>
#include <conio.h>

int main()
{
	float width, height, area;
	char unit[5];

	printf(" \nWELCOME TO RECTANGLE AREA FINDER: \n");

	printf(" \nWhat is width of your rectangle?\n");
	scanf("%f", &width);

	printf(" \nWhat id height of your rectangle?\n");
	scanf("%f", &height);

	printf("\n");

	printf("Enter unit of uper info eg:inch,feet,cm or etc:\n");
	scanf("%s", unit);

	area = 2 * (height + width);
	printf("\n");

	printf("Area of your rectangle is:\n%0.2f %s sq", area, unit);
	
	printf("\n");
}