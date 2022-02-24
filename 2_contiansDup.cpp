#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>

bool containsDup(std::vector<int> &nums)
{
    std::unordered_set<int> numsSeen;

    for (int n : nums)
    {
        if (numsSeen.find(n) != numsSeen.end())
        {
            return true;
        };
        numsSeen.insert(n);
    };
    return false;
}

int main()
{

    std::vector<int> one = {1, 3, 5, 7, 9, 0};

    bool isDupe = containsDup(one);
    std::cout << "dupe: " << isDupe << "\n";
    return 0;
}