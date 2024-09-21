#include <iostream>
using namespace std;

class Matrix
{
    int arr[3][3];

public:
    void setdata(int matrix[3][3]);
    void getdata();
    Matrix add(Matrix m);
    Matrix sub(Matrix m);
    Matrix multiply(Matrix m);
    void transpose(Matrix m);
};
void Matrix::setdata(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = matrix[i][j];
        }
    }
}
void Matrix::getdata()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix Matrix::add(Matrix m){
    Matrix temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp.arr[i][j] = arr[i][j]+ m.arr[i][j];
        }
    }
    return temp;
}
Matrix Matrix::sub(Matrix m){
    Matrix temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp.arr[i][j] = arr[i][j] - m.arr[i][j];
        }
    }
    return temp;
}
Matrix Matrix::multiply(Matrix m){
    Matrix temp;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp.arr[i][j] = 0;

            for (int k = 0; k < 3; k++) {
                 temp.arr[i][j] += arr[i][k] * m.arr[k][j];
            }
        }
    }

    return temp;
}
void Matrix::transpose(Matrix m){
     int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            arr[i][j] = m.arr[j][i];
}

int main()
{
    int arr[3][3];
    Matrix m1,m2,m3;

    cout<<"Enter the data for 1"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    m1.setdata(arr);

    cout<<"Enter the data for 2"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    m2.setdata(arr);

    cout<<"Data for 1"<<endl;
    m1.getdata();

    cout<<"Data for 2"<<endl;
    m2.getdata();

    cout<<"Sum of m1 and m2 matrix is"<<endl;
    m3 = m1.add(m2);
    m3.getdata();

    cout<<"Subtract of m1 and m2 matrix is"<<endl;
    m3 = m1.sub(m2);
    m3.getdata();

    return 0;
}