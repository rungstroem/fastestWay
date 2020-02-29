#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

struct point{
	int x;
	int y;
};

struct line{
	point p0;
	point p1;

	int magnitude(){
		return sqrt((p1.x-p0.x)^2+(p1.y-p0.y)^2);
	}
};

int mag(point p0, point p1){
	return sqrt((p1.x-p0.x)^2+(p1.y-p0.y)^2);
}

int cost(int a, int b){
	return a+b;
}

int main(){ 
	line L1;
	L1.p0.x = 1, L1.p0.y = 1;
	L1.p1.x = 1, L1.p1.y = 4;
	L2.p0.x = 1, L2.p0.y = 4;
	L2.p1.x = 4, L2.p1.y = 4;
	L3.p0.x = 4, L3.p0.y = 4;
	L3.p1.x = 4, L3.p1.y = 1;
	L4.p0.x = 4, L4.p0.y = 1;
	L4.p1.x = 1, L4.p1.y = 1;

	vector<line> lines {L1, L2, L3, L4};

	return 0;

}
