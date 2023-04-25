#include <iostream>
using namespace std;

// Function to print the array
void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
}

void rearrangeArray(int array[], int length){
    // temporary array to hold the rearranged array
    int temp[length];

    // min-max pointers to hold minimum and maximum elements
    int min = length + 1;

    // iterate through the array
    for (int i = 0; i < length; i++) {
        // to store maximum elements
        if (i % 2 == 0)
            temp[i] = array[min++];
        // to store minimum elements
        /*else
            temp[i] = array[max--];*/
    }

    printArray(temp, length);
}

// Driver program
int main()
{
    int array[100];
    int N;

    cout << "Enter Number of elements: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    rearrangeArray(array, N);

    return 0;
}
