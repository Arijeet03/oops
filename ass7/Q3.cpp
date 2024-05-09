/*Write a program in C++ to create a class matrix and overload * operator using friend function to multiply two matrices */

#include<iostream>
using namespace std;

class matrix
{
    int a[3][3];
    public:
    void getdata()
    {
        cout<<"Enter the elements of the matrix: ";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend matrix operator *(matrix m1, matrix m2);
};

matrix operator *(matrix m1, matrix m2)
{
    matrix m3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m3.a[i][j]=0;
            for(int k=0;k<3;k++)
            {
                m3.a[i][j]+=m1.a[i][k]*m2.a[k][j];
            }
        }
    }
    return m3;
}

int main()
{
    matrix m1,m2,m3;
    m1.getdata();
    m2.getdata();
    m3=m1*m2;
    cout<<"Matrix 1: "<<endl;
    m1.display();
    cout<<"Matrix 2: "<<endl;
    m2.display();
    cout<<"Matrix 1 * Matrix 2: "<<endl;
    m3.display();
    return 0;
}