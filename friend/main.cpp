#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    struct Square_Functor
    {
        void operator()(int x)
        {
            std::cout << x * x << " ";
        }
    };
    Square_Functor square;
    std::vector<int> vec{1, 2, 3};
    std::for_each(vec.begin(), vec.end(), square);

    return 0;
}
