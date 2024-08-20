#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
 //write your code only in this function
    int a_distance = a - v.begin();
    int b_distance = b - v.begin();
    for (int i=a_distance ; i < (a_distance + b_distance) >> 1 ; i++) {
        swap(v[i], v[b_distance - i + a_distance - 1]);
    }
}
int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
     int c;
     cin >> c;
     v.push_back(c);
 }
 cin >> a >> b;
 //call function
 reverse(v,v.begin()+a,v.begin()+b+1);
 //display content of the vector
 for (auto &x : v) {
     cout << x << " ";
 }
 cout << endl;
}