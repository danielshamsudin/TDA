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

int main(){
	int board[9][9] ={
		{0,0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,1,0},
		{0,0,0,0,0,0,1,0,0},
		{0,0,0,0,0,1,0,0,0},
		{0,0,0,0,1,0,0,0,0},
		{0,0,0,1,0,0,0,0,0},
		{0,0,1,0,0,0,0,0,0},
		{0,1,0,0,0,0,0,0,0},
		{1,0,0,0,0,0,0,0,0},
	};

	print_board(board);
}
