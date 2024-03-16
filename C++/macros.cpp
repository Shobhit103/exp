#include<iostream> 
using namespace std;
int score = 15; // global variable has same value all over the program
#define PI 3.14 // macro has same value
// inline function, default arguments
int main() {

    int r = 5;
    double area = PI * r * r;
    
    return 0;
}