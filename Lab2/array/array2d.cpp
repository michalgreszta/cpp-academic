#include <iostream>
#include <iomanip>

using namespace std;

void deleteArray(int **ptr, int n_row, int n_col)
{
    for (int i=0; i<n_row; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;
}

void displayArray(int **ptr, int n_row, int n_col)
{
    for (int i=0; i<n_row; i++)
    {
        for (int j=0; j<n_col; j++)
        {
            cout << setw(3) << ptr[i][j] <<" ";
        }
        cout << endl;
    }
}

void fillArray(int **ptr, int n_row, int n_col)
{
    int counter = 1;
    for (int i=0; i<n_row; i++)
    {
        for (int j=0; j<n_col; j++)
        {
            ptr[i][j] = counter++;
        }
    }
}

int **Array2D(int n_row, int n_col)
{
    int ** ptr;
    ptr = new int*[n_row];
    for (int i=0; i<n_row; i++)
    {
        ptr[i] = new int[n_col];
    }
    return ptr;
}

int main()
{
    int nrow, ncol;
    int **pointer;
    cout << "Podaj wymiary tablicy: ";
    cin >> nrow >> ncol;

    pointer = Array2D(nrow, ncol);
    fillArray(pointer, nrow, ncol);
    displayArray(pointer, nrow, ncol);
    deleteArray(pointer, nrow, ncol);

    return 0;
}
