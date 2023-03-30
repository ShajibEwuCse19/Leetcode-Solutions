class Solution
{
    public:
        int reverse(int x)
        {

            bool f = false;
            if (x < 0)
            {
                f = true;
                x = 1LL *(-1) *x;
                if (x > INT_MAX) return 0;
            }

            long long ans = 0;
            while (x > 0)
            {
                ans = 1LL *(ans + (x % 10));
                x = x / 10;
                if (x > 0) ans = 1LL *(ans *10);

                if (ans > INT_MAX) return 0;
            }

            if (f) return -ans;
            return ans;
        }
};