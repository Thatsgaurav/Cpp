#include <iostream>

using namespace std;

int main()
{
#ifdef ONLINE_JUDGE
    freopen(_Filename
            : "input.txt", _Mode
            : "r", _File
            : stdin);
    freopen(_Filename
            : "output.txt", _Mode
            : "w", _File
            : stdin);
#endif

    int n, m;
    cin >> n >> m >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout<<"Matric is:\n";
    for(int i = 0;i<n;i++) {
        for (int j = 0 j <m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}