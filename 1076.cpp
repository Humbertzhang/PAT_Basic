nclude <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		char ch[8] = {0};
		scanf("\n%c-%c %c-%c %c-%c %c-%c", &ch[0], &ch[1], &ch[2], &ch[3],
										 &ch[4], &ch[5], &ch[6], &ch[7]);
		for(int j = 1; j < 8; j += 2) {
			if(ch[j] == 'T'){
				int dummy;
				switch(ch[j-1]) {
					case 'A': dummy = 1; break;
					case 'B': dummy = 2; break;
					case 'C': dummy = 3; break;
					case 'D': dummy = 4; break;
				}
				cout << dummy;
				break;
			}
		}
	}
	cout << endl;
}

