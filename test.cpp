#include<iostream>

using namespace std;
#define SIZE 4
int main()
{
    int number = 253;
    uint8_t multi[SIZE] = {0};
    for (int i = 0; i < SIZE; i++) {
        multi[i] = --number;
    }
    uint32_t num = multi[0];
    cout << num;
}