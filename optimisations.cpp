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
