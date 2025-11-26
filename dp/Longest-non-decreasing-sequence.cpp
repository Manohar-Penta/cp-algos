// you are given a array 'a' and a cost array 'c'. You can change a number at 'i' in 'a' to anything if you pay a cost of 'c[i]'.
// minimize the cost of making the array non decreasing

/*
approach :
we can change all the numbers and take all the cost.
We only don't enquire a 'c[i]' if the nubmer at 'i' is not changed.

so we calculate positions where we don't have to change and make a dp out of it.

dp[i] is the total cost of all the unchanged number till 'i' where 'a[i]' is not changed.
*/

vl a(n), c(n);
fo(i, n) cin >> a[i];
fo(i, n) cin >> c[i];
vl dp(n);
for (int i = 0; i < n; i++)
{
    ll val = c[i];
    for (int j = 0; j < i; j++)
    {
        if (a[j] <= a[i])
            val = max(val, c[i] + dp[j]);
    }
    dp[i] = val;
}
cout << accumulate(all(c), 0ll) - (*max_element(all(dp))) << "\n";
