    static int decimalToBinary(int N)
    {

        int ans = 0;
        int cnt = 0;

        while (N != 0) {
            int rem = N % 2;
            N /= 2;
            ans += rem * Math.pow(10, cnt);

            cnt++;
        }

        return ans;
    }
