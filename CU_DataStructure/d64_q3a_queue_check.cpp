#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int mFront, mSize, mCap, last, correction;
        cin >> mFront >> mSize >> mCap >> last >> correction;
        //last = mFront + mSize
        //mCap > mSize
        //mFront < mCap
        switch(correction) {
            case 0:
                if(last != (mFront + mSize) % mCap || mCap < mSize || mFront >= mCap)
                    cout << "WRONG\n";
                else cout << "OK\n";
                break;
            case 1:
                if(mFront != (last - mSize + mCap) % mCap) cout << "WRONG " << (last - mSize + mCap) % mCap << "\n";
                else cout << "OK\n";
                break;
            case 2:
                if((last - mFront + mCap) % mCap != mSize) cout << "WRONG " << (last-mFront + mCap) % mCap <<"\n";
                else cout << "OK\n";
                break;
            case 3:
            if(mSize > mCap) {
                int out;
                if(last < mFront + mSize) out = last + 1;
                else out = (last == mFront) ? mSize : mFront + mCap - last - 1;
                cout << "WRONG " << out << "\n";
            }
            else cout << "OK\n";
                break;
            case 4:
                if((mFront + mSize) % mCap != last) cout << "WRONG " << (mFront + mSize) % mCap << "\n";
                else cout << "OK\n";
            default:
                break;
        }
    }
    
    return 0;
}