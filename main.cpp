#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
	int count = 0;
	int matrix[5][5] = 
	{ 
		{ 4, 0, 0, 0, 0 },
		{ 0, 4, 0, 0, 0 },
		{ 0, 0, 4, 0, 0 },
		{ 0, 0, 0, 4, 0 },
		{ 0, 0, 0, 0, 4 }
	
	};
		

	int * begin = &matrix[0][1];
	int * end = &matrix[4][3];
	int * p = end;
	int finished = 0;
	bool three = true;
	

	for (int i = 0; i < 5; i++){

		for (int j = 0; j < 5; j++){

			if (matrix[i][j] != 4){

				matrix[i][j] = 1;


			}
		}

	}
	while (begin != end){
		three = true;
		if (p == end){
			/*
			for (int i = 0; i < 5; i++){

				for (int j = 0; j < 5; j++){

					cout << matrix[i][j] << " ";
				}
				cout << endl;

			}

			cout << endl;
			cout << endl;
			cout << endl;
			*/
			count++;
			cout << count << endl;

		}
		
		if (*p == 1){

			*p = 2;
			while (p != end){

				p++;

			}


		}
		else if (*p == 2){

			*p = 3;
			while (p != end){

				p++;

			}



		}
		else if (*p == 3){

			while (three){


				if ((*p) != 4){
					*p = 1;
				}
				p--;

				if (*p != 3 && *p != 4){
					three = false;
					if (p == begin){
						begin++;
					}
				}

			}
			

		}
		else{

			if (p == end){

				while (*p == 4){

					p--;
					

				}

				
			}
			else{

				while (p != end && *p == 4){

					p++;

				}



			}
			
		}




	}

	
	while (1);
}