// Linear Search

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int search, i;
    bool found = false;

    cout << "Enter number to search: ";
    cin >> search;

    for(i = 0; i < 5; i++) {
        if(arr[i] == search) {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Number found at position " << i + 1;
    else
        cout << "Number not found";

    return 0;
}
