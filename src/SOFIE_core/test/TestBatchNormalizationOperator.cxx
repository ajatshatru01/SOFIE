#include <iostream>
#include <cmath>
#include <cassert>

int main()
{
    float x[4]    = {1, 2, 3, 4};
    float mean[4] = {1, 1, 1, 1};
    float scale[4]= {1, 1, 1, 1};
    float bias[4] = {0, 0, 0, 0};

    float y[4];

    for(int i = 0; i < 4; i++)
        y[i] = (x[i] - mean[i]) * scale[i] + bias[i];

    assert(y[0] == 0);
    assert(y[1] == 1);
    assert(y[2] == 2);
    assert(y[3] == 3);

    std::cout << "BatchNormalization unit test passed." << std::endl;

    return 0;
}
