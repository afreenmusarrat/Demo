/* Print the following pattern using c++:

1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5
   
*/



#include <iostream>

int main() {
    int n = 5; 
   
    for (int i = 1; i <= n; ++i) {
        
        for (int j = 1; j <= n - i + 1; ++j) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

