#define _USE_MATH_DEFINES

#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
	srand(time(NULL));

	long long in_circle, in_square, length,x, y, circle_x, circle_y, radius;
	long long c = RAND_MAX;

	circle_x = c;
	circle_y =c;
	radius = c;
	length = 2 * radius;

	in_circle = 0;
	in_square = 0;

	long double pi = 0;

	for (long long i = 0; ; i++) {

		x = static_cast<long long>(rand() % (length-1))+1;
		y = static_cast<long long>(rand() % (length-1))+1;

		//if (x<5 || y<5 || x>-5 || y>-5) {
			in_square++;

			if ((circle_x - x)*(circle_x - x) + (circle_y - y)*(circle_y - y) < (radius)*(radius))
				in_circle++;

			//cout << in_circle << "  " << in_square << endl;

			//cout << 4 * ((double)in_circle / (double)in_square) /*<<"  "<<x<<"  "<<y*/ << endl;
			if (i % 500000 == 0) {
				pi = 4.0 * ((long double)in_circle / (long double)in_square);
				cout << pi <<"\t\t"<<M_PI<< endl;
			}
		//}
	}
	//pi = 4 * ((double)in_circle / (double)in_square);
	//cout << pi<<endl;

	return 0;
}
