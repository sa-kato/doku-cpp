#include <iostream>

void hello_world()
{
    std::cout << "Hello world 日本語も表示" << std::endl;
}

void show_sum(int a, int b)
{
    int c = a + b;
    std::cout << c << std::endl;
}

int main()
{
    hello_world();
    show_sum(1, 2  );
    return 0;
}