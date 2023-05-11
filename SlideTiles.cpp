#include <iostream>
#include<array>
#include<string>

class Board 
{

};

class Tile
{
private:
    int m_number;
public:
    Tile() = default;
    explicit Tile(int number)
        :m_number(number)
    {

    }

    friend std::ostream& operator<<(std::ostream& out, const Tile& tile)
    {
        if (tile.m_number > 9)
            out << " " << tile.m_number << " ";
        else if (tile.m_number > 0)
            out << "  " << tile.m_number << "  ";
        else
            out << "   ";
        return out;
    }

    bool isEmpty()const
    {
        return m_number == 0;
    }

    int getNum() { return m_number; }



};

namespace UserInputs 
{

}

int main()
{
    Tile tile1{ 10 };
    Tile tile2{ 11 };
    Tile tile3{ 0 };
    Tile tile4{ 1 };
    std::cout << "0123456789ABCDEF\n";
    std::cout << tile1 << tile2 << tile3 << tile4 << '\n';

    std::cout << std::boolalpha << tile1.isEmpty() << " " << tile3.isEmpty() << " \n";
    std::cout << "Tile 2 has number: " << tile2.getNum() << "\nTile 4 has number: " << tile4.getNum() << '\n';
}


