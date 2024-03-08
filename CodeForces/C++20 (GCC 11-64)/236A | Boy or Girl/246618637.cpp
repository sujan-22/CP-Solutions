#include <iostream>
#include <string>
#include <unordered_set>
 
int main() {
    std::string username;
    std::cin >> username;
 
    std::unordered_set<char> distinct_characters;
 
    for (char ch : username) {
        distinct_characters.insert(ch);
    }
    
    if (distinct_characters.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }
 
    return 0;
}