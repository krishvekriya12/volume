#include<stdio.h>

struct Distance{
	int feet;
	float inch;
 }d1,d2,result;


main()
{
		printf("enter 1st distance\n");
		printf("enter feet: ");
		scanf("%d", &d1.feet);
		printf("enter inch: ");
		scanf("%f",&d1.inch);
		
		
		printf("\nenter 2nd distance\n");
		printf("enter feet: ");
		scanf("%d",&d2.feet);
		printf("enter inch: ");
		scanf("%f",&d2.inch);
		
		result.feet = d1.feet + d2.feet;
		result.inch = d1.feet + d2.feet;
		
		while (result.inch >= 12.0)
		{
			  result.inch = result.inch - 12.0;
			  ++result.feet;
		}
		printf("\nsum of distence = %d'.%f\"",result.feet,result.inch);
}