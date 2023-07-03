#include <chrono>
#include <iostream>

int main(int argc, char *argv[])
{
    const int array_length = (argc > 1) ? std::atoi(argv[1]) : 1000000;

    // measures printf time
    const std::chrono::time_point printf_start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < array_length; i++)
        printf("%d", i);
    const std::chrono::time_point printf_end = std::chrono::high_resolution_clock::now();
    const std::chrono::duration<double> printf_duration = printf_end - printf_start;

    // measures cout time
    const std::chrono::time_point cout_start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < array_length; i++)
        std::cout << i;
    const std::chrono::time_point cout_end = std::chrono::high_resolution_clock::now();
    const std::chrono::duration<double> cout_duration = cout_end - cout_start;

    printf("\n\n");
    printf("array_length:\t%d\n", array_length);
    printf("printf time:\t%f seconds\n", printf_duration.count());
    printf("cout time:\t%f seconds\n", cout_duration.count());
}
