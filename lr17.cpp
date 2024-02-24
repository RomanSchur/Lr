#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char **argv) {
    cout << argv[argc - 1] << endl;
    cout << argc << endl;
    return EXIT_SUCCESS;
}
