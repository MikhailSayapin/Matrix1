#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        cout << " Матрица пустая " << endl;
        return 0;
    }
    
    string str1 = "\0", str2 = "\0";
    int i, j;
    int k;
    for(k=0; argv[1][k]!='*'; k++)
    {
         str1 += argv[1][k];
    }

    k++;

    while(k!=strlen(argv[1]))
    {
        str2 += argv[1][k];
        k++;
    }

    k=2;

    int x = atoi(str1.c_str());
    int y = atoi(str2.c_str());

    int arr[x][y];
    
    if ((argc-2) > (x*y))
    {
        cout << " Переполнение элементами матрицы размера " << x << "*" << y << endl;
        return 0;
    }
    
    if ((argc-2) < (x*y))
    {
        cout << " Недостаточно элементов для матрицы размера " << x << "*" << y << endl;
        return 0;
    }
        

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            arr[i][j] = atoi(argv[k]);
            k++;
        }
    }


    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
