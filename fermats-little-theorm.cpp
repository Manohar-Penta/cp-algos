/*
Fermat's little theorm:

If p is a prime number and a is an integer not divisible by p, then:
    a^(p−1) ≡ 1 (modp)

Equivalently, a^p ≡ a (mod p)

we can use this to find the reminder for a inverse number:
    a^−1 ≡ a^(p−2)(modp)

eg: a/b (​mod p) = a × b^(p−2) (mod p)
*/

int add(int x, int y)
{
    return ((x + y) % MOD + MOD) % MOD;
}

int mul(int x, int y)
{
    return x * 1ll * y % MOD;
}

int binpow(int x, int y)
{
    int z = 1;
    while (y)
    {
        if (y % 2 == 1)
            z = mul(z, x);
        x = mul(x, x);
        y /= 2;
    }
    return z;
}

int inv(int x)
{
    return binpow(x, MOD - 2);
}

int divide(int x, int y)
{
    return mul(x, inv(y));
}
