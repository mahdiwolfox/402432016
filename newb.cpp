#include <iostream>
// #include <vector>
using namespace std;
const int n = 3;
int main(){
    int x[n];
    int A[n][n];
    for(int i=0;i<n;++i)
    {
        cout << "Please enter the ith element of x : " << i <<endl;
        cin >> x[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        cout << "Please enter the (ith,jth) element of Matrix A(" << i << ","<<j<< ")"<< endl;
        cin >> A[i][j];
        }
    }
    int y[n];
    for(int i=0;i<n;i++)
    {
        y[i]=0;
        for(int j=0;j<n;j++)
        {
            y[i]+=x[j]*A[j][i];
        }
        cout << i<<"th elemen of y=x*A = " <<y[i]<<endl;
    }
    return 0;




}