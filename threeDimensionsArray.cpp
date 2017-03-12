#include<iostream>
using namespace std;

main(){
	int A[3][4][5];
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 4; j++)
			for(int k = 0; k < 5; k++)
				cin >> A[i][j][k];

	cout << "start" << endl;
	char c;
	int f;
	cin >> c >> f;
	if(c == 'H'){
		for(int i = 0; i < 3; i++)
			for(int k = 0; k < 5; k++)
				cout << A[i][f][k] << endl;
	} else {
		for(int i = 0; i < 3; i++)
			for(int j = 0; j < 4; j++)
				cout << A[i][j][f] << endl;
	}
	cout << "end" << endl;
}
