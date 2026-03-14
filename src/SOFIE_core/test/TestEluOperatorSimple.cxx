#include <iostream>
#include <cmath>
#include <cassert>

float elu(float x, float alpha=1.0f)
{
    return x >= 0 ? x : alpha * (std::exp(x) - 1);
}

int main()
{
    float x[4] = {-1.0, 0.0, 1.0, 2.0};
    float y[4];

    for(int i=0;i<4;i++)
        y[i] = elu(x[i]);

    assert(std::abs(y[0] - (std::exp(-1.0)-1)) < 1e-5);
    assert(y[1] == 0);
    assert(y[2] == 1);
    assert(y[3] == 2);

    std::cout << "ELU unit test passed." << std::endl;

    return 0;
}
