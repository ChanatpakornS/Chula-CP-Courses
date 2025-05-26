#include <bits/stdc++.h>

using namespace std;

vector<int> matrix_multiply(const vector<int> &M, const vector<int> &N, int k) {
    vector<int> res(4);

    res[0] = (((M[0]%k) * (N[0]%k))%k + ((M[1]%k) * (N[2]%k))%k)%k;
    res[1] = (((M[0]%k) * (N[1]%k))%k + ((M[1]%k) * (N[3]%k))%k)%k; 
    res[2] = (((M[2]%k) * (N[0]%k))%k + ((M[3]%k) * (N[2]%k))%k)%k;
    res[3] = (((M[2]%k) * (N[1]%k))%k + ((M[3]%k) * (N[3]%k))%k)%k;

    return res;
}

vector<int> r(vector<int> &vec, int n, int k) {
    if (n == 0)
        return {1, 0, 0, 1};
    else {
        if (n % 2 == 0) {
            vector<int> vr = r(vec, n >> 1, k);
            return matrix_multiply(vr, vr, k);
        } else {
            return matrix_multiply(r(vec, n-1, k), vec, k);
        }
    }
}


int main() {
    int n, k; cin >> n >> k;

    vector<int> mat(4);

    for(int i=0; i < 4; ++i) {
        cin >> mat[i];
        mat[i] %= k;
    }

    vector<int> tmp = r(mat, n, k);

    for (int i = 0; i < 4; ++i)
        cout << tmp[i] << " ";
    return 0;
}