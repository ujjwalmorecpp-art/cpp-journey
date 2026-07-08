#include<iostream>
using namespace std;

int main(){


    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[100];

    cout << "Enter " << size << " numbers: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    float average = (float)sum / size;
    //              ↑
    //         converts to float
    //         so decimal shows!

    cout << "Sum:     " << sum     << endl;
    cout << "Average: " << average << endl;


    return 0;
}