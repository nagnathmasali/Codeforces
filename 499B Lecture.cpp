#include <iostream>
#include<math.h>
#include<algorithm>
using  namespace std;


int main() {
  short unsigned int n, m;
    cin >> n >> m;
    string a[m], b[m];
    for(int c = 0; c < m; c++)
        cin >> a[c] >> b[c];
    string spoken[n];
    for(int c = 0; c < n; c++)
        cin >> spoken[c];
    for(int c = 0; c < n; c++) {
        for(int d = 0; d < m; d++) {
            if(spoken[c] == a[d] || spoken[c] == b[d]) {
                if(a[d].length() <= b[d].length())
                    cout << a[d] << " ";
                else cout << b[d] << " ";
                break;
            }
        }
    }
    return 0;
}