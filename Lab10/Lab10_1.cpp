#include<stdio.h>
#include<math.h>
int main()
{
	//Declar all struct needed.
	struct point
	{
		double x,y;
	};
	struct point p;
	struct line
	{
		struct point p1,p2;
	};
	struct line l;
	struct triangle
	{
		struct point p4,p5,p6;
	};
	struct triangle t;
	//Assign value to all varibles.
	//Assignment of "point".
	p.x=4;
	p.y=11;
	//Assignment of "line".
	l.p1.x=2;
	l.p1.y=7;
	l.p2.x=10;
	l.p2.y=9;
	//Assignment of "triangle".
	t.p4.x=2;
	t.p4.y=0;
	t.p5.x=6;
	t.p5.y=5;
	t.p6.x=8;
	t.p6.y=3;
	//Initialize calculation result store varibles.
	float lineLength = sqrt(pow((l.p1.x-l.p2.x),2)+pow((l.p1.y-l.p2.y),2));
	float tSide1 = sqrt(pow((t.p4.x-t.p5.x),2)+pow((t.p4.y-t.p5.y),2));
	float tSide2 = sqrt(pow((t.p5.x-t.p6.x),2)+pow((t.p5.y-t.p6.y),2));
	float tSide3 = sqrt(pow((t.p6.x-t.p4.x),2)+pow((t.p6.y-t.p4.y),2));
	//Print out the result.
	printf("The length of the line is %f.\n",lineLength);
	printf("The circumference of the triangle is %f.\n",tSide1+tSide2+tSide3);
	return 0;
}