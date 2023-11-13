#include <iostream>
#include <cstdlib> 
#include <time.h>

int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 10;
    int arr[size];
    bool foundFirstZero = false;
    int xind = -1;
    int yind = -1;
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10    ; 
    }
    
    std::cout << "something new" << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << "элемент " << arr[i] << std::endl;
        if (arr[i] == 0) {
            if (!foundFirstZero) {
                xind = i;
                foundFirstZero = true;
            }
            else {
                yind = i;
                break;
            }
        }       
    }
    if (yind == -1) {

        std::cout << "Нет двух нулей " << std::endl;

        return 0;
    }
    int product = 1;
    for (int i = xind + 1; i < yind; ++i) {
        product *= arr[i];
    }
    

    std::cout << "Произведение " << product << std::endl;

    return 0;
}