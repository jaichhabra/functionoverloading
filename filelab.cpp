#include<iostream>
#include<cstdio>

using namespace std;

class Lab12 {

public:
    void Area(int r) {
        cout<<"Area of the Circle is: "<<3.142*r*r<<"sq.units"<< endl;
    }
    void Area(long s) {
        cout<<"Area of the Square is: "<<s*s<<"sq.units"<< endl;
    }
    void Area(int l, int b) {
        cout<<"Area of the Rectangle is: "<<l*b<<"sq.units"<< endl;
    }
    void Area(int s1, int s2, int s3) {
        cout<<"Area of the cuboid is: "<<2*((s1*s2)+(s2*s3)+(s3*s1))<<"sq.units"<< endl;
    }
};

int main() {

    int N1,N2,N3,N4,N5,N6,N7;
    cin >> N1;
    cin >> N2;
    cin >> N3;
    cin >> N4;
    cin >> N5;
    cin >> N6;
    cin >> N7;

    Lab12 p1;

    p1.Area(N1);
    p1.Area(long(N2));
    p1.Area(N3, N4);
    p1.Area(N5, N6, N7);

    return 0;
}
