#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Sətir sayı: ";
    cin >> m;
    cout << "Sütun sayı: ";
    cin >> n;

    int arr[50][50];

    cout << "Elementleri daxil edin:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int cem = 0, hasil = 1;
    int max = arr[0][0], min = arr[0][0];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cem += arr[i][j];
            hasil *= arr[i][j];

            if (arr[i][j] > max)
                max = arr[i][j];

            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    cout << "Cem = " << cem << endl;
    cout << "Hasil = " << hasil << endl;
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}