#include<iostream>
using namespace std;
void print12(int n) {
	int space=2*(n-1);
	for(int i=1;i<=n;i++) {
	//numbers
	for(int j=1;j<=i;j++) {
		cout << j;
	}
	//space
	for(int j=1;j<=space;j++) {
		cout << " ";
	}
	//numbers
	for(int j=i;j>=1;j--) {
		cout << j;
	}
	cout << endl;
	space-=2;
}
}
int main() {
	int x;
	cout << "Enter lines=";
	cin >> x;
	print12(x);
}
