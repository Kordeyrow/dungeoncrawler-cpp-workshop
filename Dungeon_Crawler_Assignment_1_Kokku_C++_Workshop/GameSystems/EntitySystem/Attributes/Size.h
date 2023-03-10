#pragma once

#include <string>
using namespace std;

enum class Size { Small, Medium, Big };

class SizeUtil {
public:
    static string SizeName(Size size)
    {
        switch (static_cast<int>(size))
        {
        case 0:
            return "Small";
        case 1:
            return "Medium";
        case 2:
            return "Big";
        default:
            return "Unknown";
        }
    }
};