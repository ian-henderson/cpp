#include <iostream>

class DateClass
{
    int m_year{};
    int m_month{};
    int m_day{};
    int m_array[5];

  public:
    DateClass(int year, int month, int day) : m_year{year}, m_month{month}, m_day{day}, m_array{1, 2, 3, 4, 5}
    {
    }

    void print()
    {
        std::cout << m_year << "/" << m_month << "/" << m_day << "\n";
    }

    void print_array()
    {
        for (int i = 0; i < 5; i++)
            std::cout << m_array[i] << " ";
        std::cout << "\n";
    }
};

int main()
{
    DateClass today{2023, 05, 21};
    today.print();
    today.print_array();
}
