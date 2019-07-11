//Compilador
#!/bin/bash

alias codec++='g++ -std=c++14 -static -lm -O2 -Wshadow -Wfatal-errors -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -DLOCAL_DEFINE $1'

//Template
#pragma GCC optimize("Ofast")

ios_base::sync_with_stdio(0);
cin.tie(0);
		
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
