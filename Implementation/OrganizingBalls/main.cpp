#include <iostream>

using namespace std;
int main() {
	int x;
	double y,output;
    cin>>x>>y;
	if (x <= 2000 && y <= 2000) {
		if (x < y && (x % 5) == 0) {
			output = y - x - 0.50;
			printf("%.2f",output);

		} else {
            printf("%.2f",y);
        }
	}
}