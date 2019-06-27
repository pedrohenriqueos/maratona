//s[i]*p^i mod m
long long compute_hash(string const& s) {
    const int p = 53;// lowercase letters p = 31. Uppercase and lowercase letters p = 53
    const int m = 1e9+9;// prime number 1e9+9,((1LL<<61)-1)
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
