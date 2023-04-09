#include <iostream>
using namespace std;

void getminMax(int arr[], int size, int *min, int *max){
    for(int i=0;i<size;i++){
        if(arr[i] < *min)
            *min = arr[i];
        if(arr[i] > *max)
            *max = arr[i];
    }
}

int main(){
    // cout << *(numbers + 2) << endl;         //PRINTING WITH POINTERS

    int numbers[5];

    for(int i=0;i<5;i++){
        cout << "Number: ";
        cin >> numbers[i];
    }

    for(int i=0;i<5;i++){
        cout << *(numbers + i) << " ";
    }
    cout << endl;

    int min = numbers[0];
    int max = numbers[0];

    getminMax(numbers, 5, &min, &max);

    cout << "Min is: " << min << endl;
    cout << "Max is: " << max << endl;

    return 0;
}