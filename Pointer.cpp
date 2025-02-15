#include <iostream>
using namespace std;

void ganti(int *p) {
    *p = 50;
}
int main() {
    //int *p, *q, *r;
    //int n = 10;
   // p=&n;
   // *p=5;
   // cout  << *p << endl;
   // cout << n << endl;
   // cout << p << endl;
    //cout << &n << endl;

    //int a = 20;
    //int *i = &a;
    //cout <<&a<<endl;
    //return 0;

    //int array[3] = {10,20,30};

    //char kota[] = "Ygyakarta";
    //cout << kota << endl;
    //char *j = kota;
    
    //int i;
   // for(i=0;i<10;i++) {
        cout << *(j+i) << " ";
   // }
   // int x = 10;
    //cout<<x<<endl;
    //ganti(&x);
    //cout <<x<<endl;
    //cout <<&x<<endl;

    int x=20;
    int *i=&x;
    int **ii = &i;
    cout << **ii << endl;

    return 0;
    



} 
