#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
std::vector<int> twoSum0(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> numsSeen;
    std::vector<int> twoFound;

    for (int firstNum = 0; firstNum <= nums.size(); ++firstNum)
    {
        int secondNum = target - nums[firstNum];
        if (numsSeen.find(secondNum) != numsSeen.end())
        {
            std::cout << nums[firstNum] << firstNum << "\n";
            // std::cout << nums[firstNum] << firstNum << "\n";
            std::cout << "second num: " << numsSeen[secondNum] << "val>" << secondNum << "\n";
            twoFound.push_back(numsSeen[secondNum]); // 0(1) avg, O(n) worst case
            twoFound.push_back(firstNum);

            return twoFound;
        }
        numsSeen.insert({nums[firstNum], firstNum});
    }
    return {};
    // complexity O(n) time and space
}

int main()
{
    std::vector<int> one{1, 3, 5, 7};
    std::vector<int> found = twoSum0(one, 12);
    for (int i = 0; i < found.size(); ++i)
    {
        std::cout << found[i];
    }

    return 0;
}