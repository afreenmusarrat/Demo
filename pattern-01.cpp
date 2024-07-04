#include <iostream>

using namespace std;

int main() {
    // input
    int n;
    cin >> n;

    //output
    int i = 1;
    while (i <= n) {
        int j = 1, k = 1, val = 1;
        while (k <= n-i) {
            cout << " ";
            k = k + 1;
        }
        while (j <= i) {
        	cout << val;
        	j = j + 1;
        	val = val + 1;
        }        
    	cout << endl;
   		i = i + 1;
    }    

    return 0;
}
