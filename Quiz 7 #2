#include <iostream>

using namespace std;
void printtriangle(int numbers[][3], int);

int main()
{
    const int size=3;
    int numbers[size][size]={{0,1,2},{3,4,5},{6,7,8}};
    printtriangle(numbers,size);
    return 0;
}
void printtriangle(int numbers[][3], int size)
{
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            if (j<=i){
                std::cout << numbers[i][j] << ' ';
            }
        }
        std::cout << "\n" ;
    }
}