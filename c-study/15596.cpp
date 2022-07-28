#include <iostream>
using namespace std;

long long fun(){
    int n;
    cout << "number : ";
    cin >> n;

    int *a = new int[n];
    int long long sum = 0;
    for(int i = 0 ; i< n ; i++){
        cout << i+1 << "th number : ";
        cin >> a[i];
        sum += a[i];
    }

    return sum;
}

int main(){
    cout << fun() << endl;
}