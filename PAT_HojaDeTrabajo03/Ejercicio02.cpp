#include "Ejercicio02.h"
#include <unordered_map>
#include <vector>
#include <algorithm>

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    unordered_map<string, vector<string>> anagramGroups;

    for (const string& word : strings)
    {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());

        anagramGroups[sortedWord].push_back(word);
    }

    vector<vector<string>>* result = new vector<vector<string>>;
    for (auto& group : anagramGroups)
    {
        result->push_back(group.second);
    }

    return result;
}