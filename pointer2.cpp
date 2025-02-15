#include <iostream>
using namespace std;
int main() {
    int rata2;
    int array[] = {1,2,3,4,5};
    int *j = array;

    int i;
    for(i=0;i<5;i++) {
        cout << *(j+i) << " ";
    }
    cout << endl;
    cout << array[0] << endl;
    cout << array[4] << endl;
}