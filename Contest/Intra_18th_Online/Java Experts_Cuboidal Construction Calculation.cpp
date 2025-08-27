//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//
//#define ll long long int
//
//#define ull unsigned long long int
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//
//    cin.tie(NULL);
//
//    ll n;
//
//    cin >> n;
//
//    ll result = pow(6,n);
//
//    cout << result << endl;
//}

import java.math.BigInteger;
import java.util.Scanner;

public class PowerOfSix {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long n = scanner.nextLong();

        BigInteger base = BigInteger.valueOf(6);
        BigInteger result = base.pow((int) n);

        System.out.println(result);
    }
}
