#include <iostream>
#include <string>
#include <vector>

template <typename T>
struct Serializer {
    static std::string serialize(const T &value) {
        return "[generic] " + std::to_string(value);
    }
};

template <>
struct Serializer<std::string> {
    static std::string serialize(const std::string &value) {
        return "[string] " + value;
    }
};

template <typename T>
struct Serializer<std::vector<T>> {
    static std::string serialize(const std::vector<T> &value) {
        std::string res = "[vector] ";

        for (auto el : value) {
            res += std::to_string(el) + ",";
        }

        return res;
    }
};

int main() {
    std::cout << Serializer<int>::serialize(10) << '\n';
    std::cout << Serializer<float>::serialize(3.5) << '\n';
    std::cout << Serializer<char>::serialize('c') << '\n';
 
    std::vector<int> vec_i = {1,2,3};
    std::vector<float> vec_f = {1.5,2.2,3.3};

    std::cout << Serializer<std::vector<int>>::serialize(vec_i) << '\n';
    std::cout << Serializer<std::vector<float>>::serialize(vec_f) << '\n';
    // std::cout << serialize("aaa") << '\n';
}