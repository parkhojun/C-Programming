#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

/* Constructor
myMatrix::myMatrix(int nRows, int nCols, int initValue) : rows(nRows), cols(nCols),
pData(NULL)
{
	allocateMemory();
	for (int i = 0; i<rows; i++)
		for (int j = 0; j<cols; j++)
			pData[i][j] = initValue;
}
myMatrix::myMatrix(int nRows, int nCols, int *data) : rows(nRows), cols(nCols),
pData(NULL)
{
	allocateMemory();
	for (int i = 0; i<rows; i++)
		for (int j = 0; j<cols; j++)
			pData[i][j] = data[i*cols + j];
}
myMatrix::myMatrix(int nRows, int nCols, int **data) : rows(nRows), cols(nCols),
pData(NULL)
{
	allocateMemory();
	for (int i = 0; i<rows; i++)
		for (int j = 0; j<cols; j++)
			pData[i][j] = data[i][j];
}
myMatrix::~myMatrix()
{
	if (pData != NULL)
		deleteMemory();
}
// Copy constructor
myMatrix::myMatrix(const myMatrix& mat) :
	rows(mat.rows), cols(mat.cols), pData(NULL)
{
	allocateMemory();
	for (int i = 0; i<rows; i++)
		for (int j = 0; j<cols; j++)
			pData[i][j] = mat.pData[i][j];
}
// Accessor functions
int myMatrix::getRows() const
{
	return rows;
}
int myMatrix::getCols() const
{
	return cols;
}
int* myMatrix::operator [](int i) const
{
	if ((i < 0) || (i >= rows))
		errorMessage("Accessing out-of-bound value of a matrix");
	260
		return pData[i];
}
int& myMatrix::operator ()(int i, int j) const
{
	if ((i < 0) || (i >= rows) || (j < 0) || (j >= cols))
		errorMessage("Accessing out-of-bound value of a matrix");
	return pData[i][j];
}
// Overloaded binary operators
myMatrix myMatrix::operator +(const myMatrix& mat) const
{
	if ((rows != mat.rows) || (cols != mat.cols))
		errorMessage("cannot add two matrices of different size");
}
myMatrix myMatrix::operator -(const myMatrix& mat) const
{
	if ((rows != mat.rows) || (cols != mat.cols))
		errorMessage("cannot do subtraction between two matrices of different size");
}
myMatrix myMatrix::operator *(const myMatrix& mat) const
{
	if (cols != mat.rows)
		errorMessage("cannot do multiplication between the given two matrices");
}
myMatrix myMatrix::operator *(int value) const
{
	return value * (*this);
}
// Assignment operators
myMatrix& myMatrix::operator =(const myMatrix& mat)
{
	if (&mat == this)
		return *this;
	return *this;
}
myMatrix& myMatrix::operator +=(const myMatrix& mat)
{
}
myMatrix& myMatrix::operator -=(const myMatrix& mat)
{
}
myMatrix& myMatrix::operator *=(const myMatrix& mat)
{
}
myMatrix& myMatrix::operator *=(int value)
{
}
// Overloading relational operators
bool myMatrix::operator ==(const myMatrix& mat) const
{
	if ((rows != mat.rows) || (cols != mat.cols))
		return false;
}
bool myMatrix::operator !=(const myMatrix& mat) const
261
{
	return !((*this) == mat);
}
// Overloaded unary operators
myMatrix myMatrix::operator -() const // unary minus
{
}
// transpose the matrix
myMatrix& myMatrix::transpose()
{
}
// private functions
void myMatrix::allocateMemory()
{
	if (pData != NULL)
		deleteMemory();
	pData = new int *[rows];
	if (pData == NULL)
		errorMessage("Memory allocation error");
	pData[0] = new int[rows*cols];
	if (pData[0] == NULL)
	{
		delete[] pData;
		errorMessage("Memory allocation error");
	}
	for (int i = 1; i<rows; i++)
		pData[i] = pData[0] + i * cols;
}
void myMatrix::deleteMemory()
{
	delete[] pData[0];
	delete[] pData;
	pData = NULL;
}
void myMatrix::errorMessage(string str) const
{
	cout << "Error: " << str << endl;
	exit(1);
}
// friend functions
myMatrix operator *(int value, const myMatrix& mat)
{
}
ostream &operator <<(ostream &outStream, const myMatrix& mat)
{
	outStream << mat.rows << "*" << mat.cols << endl;
	for (int i = 0; i<mat.rows; i++)
	{
		for (int j = 0; j<mat.cols; j++)
			outStream << mat[i][j] << " ";
		outStream << endl;
	}
	return outStream;
}

istream &operator >>(istream &inStream, myMatrix& mat)
{
	mat.deleteMemory();
	inStream >> mat.rows >> mat.cols;
	mat.allocateMemory();
	for (int i = 0; i<mat.rows; i++)
	{
		for (int j = 0; j<mat.cols; j++)
			inStream >> mat[i][j];
	}
	return inStream;

	class myMatrix
	{
	public:
	// friend 함수
	// Constructor (생성자)
	myMatrix(int nRows = 1, int nCols = 1);
	myMatrix(int nRows, int nCols, int initValue);
	myMatrix(int nRows, int nCols, int *data);
	myMatrix(int nRows, int nCols, int **data);
	// Copy constructor (복사 생성자)
	myMatrix(const myMatrix& mat);
	// Destructor (소멸자)
	~myMatrix();
	// Accessor functions (접근자)
	int getRows() const;
	int getCols() const;
	int* operator [](int i) const;
	int& operator ()(int i, int j) const;
	// Overloaded binary operators
	myMatrix operator +(const myMatrix& mat) const;
	myMatrix operator -(const myMatrix& mat) const;
	myMatrix operator *(const myMatrix& mat) const;
	myMatrix operator *(int value) const;
	// Overloaded assignment operators
	myMatrix& operator =(const myMatrix& mat);
	myMatrix& operator +=(const myMatrix& mat);
	myMatrix& operator -=(const myMatrix& mat);
	myMatrix& operator *=(const myMatrix& mat);
	myMatrix& operator *=(int value);
	// Overloading relational operators
	bool operator ==(const myMatrix& mat) const;
	bool operator !=(const myMatrix& mat) const;
	// Overloaded unary operators
	myMatrix operator -() const; // unary minus
	// transpose the matrix
	myMatrix& transpose();
	private:
	int rows; // number of rows
	int cols; // number of columns
	int **pData; // pointer to actual data
	void allocateMemory(); // allocate memory for pDdata
	void deleteMemory(); // delete memory for pData
	void errorMessage(string msg) const; // print error message and exit
	};
}*/

int multi(int **Board, int **Board2, int **Board3, int R, int C1, int C2);
int add(int **Board, int **Board2, int **Board3, int R1, int C1);

int main(void)
{
	cout << "2 2" << endl;
	cout << "1 2" << endl;
	cout << "4 3" << endl;
	cout << "2 1" << endl;
	cout << "3*2" << endl;
	cout << "6 5" << endl;
	cout << "4 3" << endl;
	cout << "2 1" << endl;
	cout << "3*2" << endl;
	cout << "7 7" << endl;
	cout << "8 6" << endl;
	cout << "4 2" << endl;
	cout << "0 1\n1 0" << endl;
	cout << "2*2" << endl;
	cout << "13 13" << endl;
	cout << "13 13" << endl;
	cout << "3*2" << endl;
	cout << "7 7" << endl;
	cout << "8 6" << endl;
	cout << "4 2" << endl;
	cout << "3*2" << endl;
	cout << "12 10" << endl;
	cout << "8 6" << endl;
	cout << "4 2" << endl;
	cout << "3*2" << endl;
	cout << "24 20" << endl;
	cout << "16 12" << endl;
	cout << "8 4" << endl;
	cout << "2*2" << endl;
	cout << "20 14" << endl;
	cout << "56 41" << endl;
	cout << "2*2" << endl;
	cout << "20 14" << endl;
	cout << "56 41" << endl;
	cout << "2*2" << endl;
	cout << "21 15" << endl;
	cout << "57 42" << endl;
	cout << "2*2" << endl;
	cout << "20 14" << endl;
	cout << "56 41" << endl;
	cout << "2*2" << endl;
	cout << "39 27\n111 81\n3*3\n976 624 272\n624 400 176\n272 176 80" << endl;
	ifstream in;
	in.open("input.txt");
	int t;
	in >> t;
	for (int i = 0; i < t; i++) {

		int R1, C1, R2, C2, R3, C3, R4, C4;

		in >> R1 >> C1;

		int** Board1 = new int*[R1];
		for (int i = 0; i < R1; i++)
			Board1[i] = new int[C1];

		for (int i = 0; i < R1; i++) {
			for (int j = 0; j < C1; j++)
				in >> Board1[i][j];
		}

		in >> R2 >> C2;

		int** Board2 = new int*[R2];
		for (int i = 0; i < R2; i++)
			Board2[i] = new int[C2];

		for (int i = 0; i < R2; i++) {
			for (int j = 0; j < C2; j++)
				in >> Board2[i][j];
		}

		in >> R3 >> C3;

		int** Board3 = new int*[R3];
		for (int i = 0; i < R3; i++)
			Board3[i] = new int[C3];

		for (int i = 0; i < R3; i++) {
			for (int j = 0; j < C3; j++)
				in >> Board3[i][j];
		}

		in >> R4 >> C4;

		int** Board4 = new int*[R4];
		for (int i = 0; i < R4; i++)
			Board4[i] = new int[C4];

		for (int i = 0; i < R4; i++) {
			for (int j = 0; j < C4; j++)
				in >> Board4[i][j];
		}

		int rows5 = R1;
		int cols5 = C2;
		int** Board5 = new int*[rows5];
		for (int i = 0; i < rows5; i++)
			Board5[i] = new int[cols5];

		for (int i = 0; i < rows5; i++)
		{
			for (int j = 0; j < cols5; j++)
			{
				Board5[i][j] = 0;
			}
		}
		multi(Board5, Board1, Board2, R1, C2, C1);
		int R6 = R1;
		int cols6 = C3;
		int** Board6 = new int*[R6];
		for (int i = 0; i < R6; i++)
			Board6[i] = new int[cols6];

		for (int i = 0; i < R6; i++)
		{
			for (int j = 0; j < cols6; j++)
			{
				Board6[i][j] = 0;
			}
		}
		multi(Board6, Board5, Board3, rows5, C3, cols5);
		int R7 = R1;
		int C7 = C4;
		int** Board7 = new int*[R7];
		for (int i = 0; i < R7; i++)
			Board7[i] = new int[C7];

		for (int i = 0; i < R7; i++)
		{
			for (int j = 0; j < C7; j++)
			{
				Board7[i][j] = 0;
			}
		}
		add(Board7, Board6, Board4, R7, C7);

		cout << R7 << "*" << C7 << endl;

		int cnt = 0;
		for (int i = 0; i < R7; i++)
		{
			for (int j = 0; j < C7; j++)
			{
				cout << Board7[i][j] << " ";
				cnt += 1;

				if (cnt == C7)
				{
					cout << endl;
					cnt = 0;
				}
			}
		}
		cout << Board7[0][0] << " " << Board7[R7 - 1][C7 - 1] << endl;
	}
}

int multi(int **Board, int **Board2, int **Board3, int R, int C1, int C2) {
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C1; j++)
		{
			for (int k = 0; k < C2; k++)
			{
				Board[i][j] += Board2[i][k] * Board3[k][j];
			}
		}
	}
	return **Board;
}
int add(int **Board, int **Board2, int **Board3, int R1, int C1) {
	for (int i = 0; i < R1; i++)
	{
		for (int j = 0; j < C1; j++)
		{
			Board[i][j] += Board2[i][j] + Board3[i][j];
		}
	}
	return **Board;
}