/*
  Useful code to print all substrings runs O(n^3)
*/

void print_all_substrings(string str) {
    int n = str.size();
    // Pick starting point
    for (int len = 1; len <= n; len++) {    
        // Pick ending point
        for (int i = 0; i <= n - len; i++) {
            // Print characters from current
            // starting point to current ending
            // point.  
            int j = i + len - 1;            
            for (int k = i; k <= j; k++) 
                cout << str[k];
            cout << endl;
        }

    }
    return;
}
