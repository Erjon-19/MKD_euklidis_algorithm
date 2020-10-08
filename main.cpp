#include <iostream>
#include <algorithm>    // std::min_element, std::max_element

using namespace std;

bool myfn(int i, int j) { return i<j; }

//function declaration
int MKD(int a, int b);

int main()
{
    cout << "Start" << endl;

    //list of pairs
    int a[] = {1, 8, 7, 224}, b[] = {4, 8, 16, 16};
    int mkd[] = {1, 1, 1, 1};

    //result, and call of recursive function
    for(int i=0; i<4; i++) {
        mkd[i] = MKD(a[i], b[i]);
    }

    cout << "MKD is : " << *max_element(mkd, mkd+4, myfn) << endl;

    cout << "End" << endl;

    return 0;
}

int MKD(int a, int b) {

    /**
    if  a and b don't have any common MKD
        then 1 wanna return as result,
        which id acceptable as the regular
        KD in any number.
    */
        if(a==b) {
            return a;
        } else if(a<b) {
            MKD(a, b-a);

        } else {
            MKD(a-b, b);
        }
}
