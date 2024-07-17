#include<iostream>
#include<vector>
using namespace std;
class matrix
{
private:
	int row;
	int col;
	vector<vector<int>> data;
public:
	matrix(int n, int m) {
		row = n; col = m;
		 data.resize(row, vector<int>(col, 0)); // thay đổi lại kích thước ma trận
	}
	// getter cho hang
	int getRow() {
		return row;
	}
	// setter cho hang
	void setRow(int hang) {
		row = hang;
	}
	// getter cho cot
	int getCol() {
		return col;
	}
	// setter cho cot
	void setCol(int cot) {
		col = cot;
	}
	// getter cho ma tran
	int getData(int i, int j) {
		if (i >= 0 && i < row && j >= 0 && j < col) {
			return data[i][j];
		}
		else cout<<"a[" << i<<"][" << j<<"] out of range";
	}
	// setter cho ma tran
	void setData(int i, int j, int value) {
		if (i >= 0 && i < row && j >= 0 && j < col) {
			data[i][j] = value;
		}
		else cout<<"a[" << i<<"][" << j<<"] out of range";
		
	}
	void display(){
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < col; ++j) {
				cout << data[i][j] << " ";
			}
			cout << endl;
		}
	}
	matrix nhanMaTran(matrix a, matrix b)
	
};
int main()
{
	matrix mat(3, 3);

	// Thiết lập dữ liệu cho ma trận
	mat.setData(0, 0, 1);
	mat.setData(0, 1, 2);
	mat.setData(0, 2, 3);
	mat.setData(1, 0, 4);
	mat.setData(1, 1, 5);
	mat.setData(1, 2, 6);
	mat.setData(2, 0, 7);
	mat.setData(2, 1, 8);
	mat.setData(2, 2, 9);
   mat.display();
}
