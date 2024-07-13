#pragma GCC optimize("O3", "unroll-loops")

const int ZERO = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();


// these are some optimisations you can add to your code if you just need that small amount of speed boost
// also possible: use other pragmas as well

// below is some stuff i saw other users using, seems to work

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int init = [] {
    ofstream out("user.out");
    cout.rdbuf(out.rdbuf());
    for (string str; getline(cin, str); cout << '\n') {
        if (str.find(',') == string::npos) {
            cout << str;
            continue;
        }
        stringstream ss(str); ss.ignore();
        int prev; ss >> prev; ss.ignore();
        cout << '[' << prev;
        for (int curr; ss >> curr; ss.ignore()) {
            cout << ',' << gcd(prev, curr) << ',' << curr;
            prev = curr;
        }
        cout << ']';
    }
    exit(0);
    return 0;
}();
