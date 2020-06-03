#include <iostream>
#include "EnumIterator.h"

//Solution 1
enum Color {
    Red, Green, Blue, enumEnd
};

char *Colors[] =
        {
                "Red",
                "Green",
                "Blue"
        };

//Solution 2
namespace MyEnum {
    enum OtherColors {
        Blue ,
        Purple,
        Yellow
    };

    static const OtherColors All[] = {Blue, Purple, Yellow};
}

char *otherColors[] =
        {
                "Blue",
                "Purple",
                "Yellow"
        };


//EnumIterator Class



enum class Food {
    Fries = 5, Burger, Kebab,
    First = Fries,
    Last = Kebab
};


int main() {
    //Solution 1
    for (int color = Red; color != enumEnd; color++) {
        Color currentColor = static_cast<Color>(color);
        std::cout << Colors[currentColor] << " = " << currentColor << std::endl;
    }

    //Solution 2
    for (const auto currentEnum : MyEnum::All) {
        std::cout << otherColors[currentEnum] << " = " << currentEnum << std::endl;
    }

    //Enum Class
    for( auto e: EnumIterator<Food>() )
    {
        std::cout << ((int)e) << std::endl;
    }

    return 0;
}
