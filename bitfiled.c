#include<stdio.h>

#pragma pack(1)
struct Date
{
	unsigned int Day: 5;
	unsigned int Month : 4;
	unsigned int Year : 15;

};

int main()
{
	struct Date obj;

	printf("Enter day\n");
	scanf("%d",obj.Day);

	printf("Enter Month\n");
	scanf("%d",obj.Month);

	printf("Enter Year\n");
	scanf("%d",obj.Year);

	printf("%d%d%d\n",obj.Day,obj.Month,obj.Year);

	return 0;
}
