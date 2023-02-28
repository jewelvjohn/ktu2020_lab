#include<stdio.h>
#include<math.h>

struct coordinates
{
	int x,y;
};

int main()
{
	float distance;
	struct coordinates pt1, pt2;
	
	printf("\nEnter the X & Y coordinates of the first points : ");
	scanf("%d%d" ,&pt1.x ,&pt1.y);
	
	printf("\nEnter the X & Y coordinates of the second points : ");
	scanf("%d%d" ,&pt2.x ,&pt2.y);
	
	distance = sqrt(pow((pt2.x-pt1.x),2)+pow((pt2.y-pt1.y),2));
	
	printf("\nThe distance between the points (%d , %d) & (%d , %d) is = %f" ,pt1.x ,pt1.y ,pt2.x ,pt2.y ,distance);
	
	return 0;
}
