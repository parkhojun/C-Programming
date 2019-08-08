#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
	Matrix(int _num_row, int _num_col)
		:num_row_(_num_row), num_col_(_num_col)
	{
		for (int i = 0; i < element_.size(); i++)
			element_[i] = 0;
	}
	int num_row()const { return num_row_; }
	int num_col()const { return num_col_; }

	//()라는 연산자를 새롭게 정의하고 싶어.
	//l-vlaue (write) 
	float& operator ()(int _row, int _col)
	{
		int idx = _row + num_row_ *_col;
		return element_[idx];
	}
	//r-vlaue (read)
	float operator ()(int _row, int _col) const
	{
		int idx = _row + num_row_ *_col;
		return element_[idx];
	}


private:
	int num_row_;
	int num_col_;

	std::vector<float> element_;
};

class Vector {
public:
	Vector(int _dim)
		:dim_(_dim)
	{
		element_.resize(_dim);
		for (int i = 0; i < element_.size(); i++)
			element_[i] = 0;
	}

	int dim() const { return dim_; }


	float& operator ()(int _col)
	{
		return element_[_col];
	}
	//r-vlaue (read)
	float operator ()(int _col) const
	{
		return element_[_col];
	}

private:
	int dim_;
	vector<float> element_;
};



Vector operator* (const Matrix& M, const Vector& v)
{
	Vector r(M.num_row());

	for (int i = 0; i < r.dim(); i++)
	{
		r(i) = 0;
		for (int c = 0; c < M.num_col(); c++)
			r(i) += M(i, c)* v(c);
	}

	return r;
}



//void func(const Matrix A) {
//   std::cout << A(0, 0) << std::endl;//r-value 만들어야함
//}



ostream& operator << (ostream& os, const Vector& v)
{
	os << "[" << v(0) << ", " << v(1) << ", " << v(2) << "]";
	return os;
}

int main() {
	Matrix A(3, 3), B(3, 3), C(3, 3);
	Vector x(3), y(3), z(3);

	//   A.set_element(0,0,-1);
	A(0, 0) = -1; //연산자 오버로딩//l-value
	A(1, 1) = 1;

	x(0) = -1;
	x(1) = 1.1;
	x(2) = 3.14;

	y = A*x;
	cout << A(0, 0) << endl; //r-value//읽기 쓰기 둘 다 되게
	cout << x(2) << endl;
	
	
	//cout << "y: " << y << endl;
	//   C=mult(A,B);
	//C = A*B;
}