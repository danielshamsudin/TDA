#include <bits/stdc++.h>
using namespace std;

void print_board(int x[9][9]){
	for (int rows=0;rows < 9;rows++){
		if (rows%3==0){
			cout << "-------------------------"<< endl;
		}
		for (int cols=0;cols < 9;cols++){
			if(cols%3==0) cout << "| ";
			cout << x[rows][cols] << " ";
		}
		cout << "|" << endl;

	}
	cout << "-------------------------"<< endl;
}

bool check_row(int x[9][9], int rowNum){
	set<int> num;
	for (int cols=0;cols<9;cols++){
		if(x[rowNum][cols] == 0) continue;
		if(num.find(x[rowNum][cols]) != num.end()){
			// found a dupe
			cout << "dupe" << endl;
			return false;
		}else{
			num.insert(x[rowNum][cols]);
		}
	}
	return true;
}

bool check_col(int x[9][9], int colNum){
	set<int> num;
	for (int rows=0;rows<9;rows++){
		if(x[rows][colNum] == 0) continue;
		if (num.find(x[rows][colNum]) != num.end()){
			cout << "dupe" << endl;
			return false;
		}else{
			num.insert(x[rows][colNum]);
		}
	}
	return true;
}

bool check_box(int x[9][9]){
	set<int> num;
	int boxNum = 0;
	while(boxNum != 9){
		for (int rows=0;rows<9;rows++){
			for (int cols=0;cols<9;cols++){
				if(x[rows][cols] == 0) continue;
				if (rows/3 * 3 + cols/3 == boxNum){
					if (num.find(x[rows][cols]) != num.end()){
						cout << "dupe in box-" << boxNum << endl;
						cout << "\tdupe for number: " << x[rows][cols] << endl;
						//return false;
					}else{
						num.insert(x[rows][cols]);
					}
				}
			}
		}
		num.clear();
		boxNum++;
	}
	return true;
}

void print_box(int x[9][9], int boxNum){
	
	for (int i=0;i<9;i++){
		for (int j=0;j<9;j++){
			if (i/3 * 3 + j/3 == boxNum){
				cout << x[i][j];
			}
		}
	}

}


int main(){
	int board[9][9] ={
		{1,2,3,4,5,6,7,8,1},
		{2,0,0,0,0,0,0,1,0},
		{3,0,0,0,0,0,1,0,0},
		{4,0,0,0,0,1,0,0,0},
		{5,0,0,0,1,0,0,0,0},
		{6,0,0,1,0,0,0,0,0},
		{7,0,1,0,0,0,0,0,0},
		{8,1,0,0,0,0,0,0,0},
		{1,0,0,0,0,0,0,0,0},
	};

	print_board(board);
	cout << endl;
	cout << check_row(board, 0) << endl;
	cout << check_col(board, 0) << endl;
	cout << check_box(board) << endl;
}
