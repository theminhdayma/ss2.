#include<stdio.h>
#include<math.h>
int main(){
	float edge_of_square, length, width, radius;
	const float PI = 3.14;
	// chu vi : perimeter
	int perimeter_square = edge_of_square * 4;
	int perimeter_rectangle = (length + width) * 2;
	int perimeter_circle = 2 * PI * radius;
	// dien tich : acreage
	int acreage_square = edge_of_square * edge_of_square;
	int acreage_rectangle = length * width;
	int acreage_circle = PI * radius * radius;
}
