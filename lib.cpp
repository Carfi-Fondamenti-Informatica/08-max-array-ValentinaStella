#include "lib.h"
#include <iostream>
using namespace std;
void trovamax(){
    cout<<"Dimensione: "<<endl;
    int D, max;
    cin>>D;
   int a[D];
    for (int i = 0; i < D; ++i) {
        cout<<"inserisci numeri: ";
        cin>>a[i];


    }
    max=a[0];
    for (int i = 0; i < D; ++i) {
        if (a[i]>max){
            max=a[i];
        }

    }
    cout<<"massimo: "<<max<<endl;
}
