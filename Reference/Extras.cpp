//Compilador
#!/bin/bash
alias codec++='g++ -std=c++17 -static -lm -O2 -Wfatal-errors -DLOCAL_DEFINE $1'

//testar casos (arquivos.in)
alias tests='for test in *.in; do echo $test; ./a.out < $test ; done'

//Template
#pragma GCC optimize("Ofast")

#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
