#include<iostream>
using namespace std;

int main() {
    int arr[5]={10, 50, 20, 80, 30};

    int *ptr=arr;
    int max=*ptr;

    for(int i=1;i<5;i++) {
        if(*(ptr+i)>max) {
            max= *(ptr+i);
        }
    }

    cout<<"Largest element = "<<max<<endl;

    return 0;
}