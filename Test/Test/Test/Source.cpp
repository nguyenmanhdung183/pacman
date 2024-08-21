#include <iostream>
#include <array>

const int MAP_WIDTH = 3;
const int MAP_HEIGHT = 3;

enum Cell {
    Door,
    Empty,
    Energizer,
    Pellet,
    Wall
};

void printMap(const std::array<std::array<Cell, MAP_WIDTH>, MAP_HEIGHT>& map) {
    for (const auto& row : map) {
        for (const auto& cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::array<std::array<Cell, MAP_WIDTH>, MAP_HEIGHT> map = {{
        { Door, Empty, Pellet },
        { Wall, Energizer, Empty },
        { Pellet, Wall, Door }
    }};

    printMap(map);

    return 0;
}
