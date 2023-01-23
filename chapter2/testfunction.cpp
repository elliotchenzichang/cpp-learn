#include<iostream>
using namespace std;

void printInt(int);

int main()
{
    int num = 100;
    printInt(num);
    num = 300;
    printInt(num);
    return 0;
}

void printInt(int n) {
    cout << n << endl;
}