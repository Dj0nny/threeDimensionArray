#include<iostream>
using namespace std;

main(){
	int A[3][4][5];
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 4; j++)
			for(int k = 0; k < 5; k++)
				cin >> A[i][j][k]; // read the array

	cout << "start" << endl;
	char c; // R for the rows, everything else for the colums 
	int f; // number of the row [0..4] or column [0..5] for every level [0..2]
	cin >> c >> f;
	if(c == 'R'){
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
