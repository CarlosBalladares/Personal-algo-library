// Printing macros
#define print_l(a) cout << a << endl;
#define print(a) cout << a;
#define print_val(message, val) cout << message << val << endl;
#define endl() cout << endl;

// Max, min macros
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

// Loop macros
#define FOR(x, n) for(int x = 0; x < n; x++)
#define FOR_IT(iter, iterable) for(auto iter = (iterable).begin(); iter != (iterable).end(); ++iter)
#define FOR_BACK(x, n) for(int x = n-1 x >= 0; x--)

// debug macros
#define DEBUG 1
#define DEBUG_DO(x) if (DEBUG) x

// maros update
#define DEBUG 0
#define print_val(message, val) if(DEBUG) cout << message << val << endl;
#define print_l(a) if(DEBUG) cout << a << endl;
#define print_vec(a) if(DEBUG) for(int i =0; i <a.size();i++)cout << a[i] <<", "; cout << endl;
#define FOR(x, n) for(int x = 0; x < n; x++)
#define FOR_RANGE(x,beg, n) for(int x = beg; x < n; x++)
#define FOR_IT(iter, iterable) for(auto iter = (iterable).begin(); iter != (iterable).end(); ++iter)
#define FOR_BACK(x, n) for(int x = n-1 x >= 0; x--)
#define WHILE_NE(c) while(!(c.empty()))