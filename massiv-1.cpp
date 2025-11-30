#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Massivin uzunlugunu daxil edin: ";
    cin >> n;

    int arr[100];
    cout << "Elementleri daxil edin:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int cem = 0, hasil = 1;
    int max = arr[0], min = arr[0];

    for (int i = 0; i < n; i++) {
        cem += arr[i];
        hasil *= arr[i];

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Cem = " << cem << endl;
    cout << "Hasil = " << hasil << endl;
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}