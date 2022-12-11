#include "lib.h"
#include <iostream>
using namespace std;
void trovamax(){
    int D;
    float max;
    cin>>D;
   float a[D];
    for (int i = 0; i < D; ++i) {
        cin>>a[i];
    }
    max=a[0];
    for (int i = 0; i < D; ++i) {
        if (a[i]>max){
            max=a[i];
        }

    }
    cout<<max<<endl;
}
