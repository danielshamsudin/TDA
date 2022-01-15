#include <bits/stdc++.h>

using namespace std;

int main(){
	set<int> a = {1,2,3};

	int b[] = {1,2,3,4,5,6};

	for (int x:b){
		if (a.find(x) != a.end()){
			cout << "dupe" << endl;
		}
		else{
			a.insert(x);
		}
	}

	for (int x:a) cout << x << endl;
}
