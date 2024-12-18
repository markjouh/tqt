const int width = 17;
const int offset = 8;

const int numSpaces = 121;
const int numCenter = 61;

const int deltaX[6] = {-1, -1, 0, 1, 1, 0}, deltaY[6] = {0, 1, 1, 0, -1, -1};

const struct Coord spaces[numSpaces] = {
    {0, 12},
    {1, 11}, {1, 12},
    {2, 10}, {2, 11}, {2, 12},
    {3, 9}, {3, 10}, {3, 11}, {3, 12},
    {4, 4}, {4, 5}, {4, 6}, {4, 7}, {4, 8}, {4, 9}, {4, 10}, {4, 11}, {4, 12}, {4, 13}, {4, 14}, {4, 15}, {4, 16},
    {5, 4}, {5, 5}, {5, 6}, {5, 7}, {5, 8}, {5, 9}, {5, 10}, {5, 11}, {5, 12}, {5, 13}, {5, 14}, {5, 15},
    {6, 4}, {6, 5}, {6, 6}, {6, 7}, {6, 8}, {6, 9}, {6, 10}, {6, 11}, {6, 12}, {6, 13}, {6, 14},
    {7, 4}, {7, 5}, {7, 6}, {7, 7}, {7, 8}, {7, 9}, {7, 10}, {7, 11}, {7, 12}, {7, 13},
    {8, 4}, {8, 5}, {8, 6}, {8, 7}, {8, 8}, {8, 9}, {8, 10}, {8, 11}, {8, 12},
    {9, 3}, {9, 4}, {9, 5}, {9, 6}, {9, 7}, {9, 8}, {9, 9}, {9, 10}, {9, 11}, {9, 12},
    {10, 2}, {10, 3}, {10, 4}, {10, 5}, {10, 6}, {10, 7}, {10, 8}, {10, 9}, {10, 10}, {10, 11}, {10, 12},
    {11, 1}, {11, 2}, {11, 3}, {11, 4}, {11, 5}, {11, 6}, {11, 7}, {11, 8}, {11, 9}, {11, 10}, {11, 11}, {11, 12},
    {12, 0}, {12, 1}, {12, 2}, {12, 3}, {12, 4}, {12, 5}, {12, 6}, {12, 7}, {12, 8}, {12, 9}, {12, 10}, {12, 11}, {12, 12},
    {13, 4}, {13, 5}, {13, 6}, {13, 7},
    {14, 4}, {14, 5}, {14, 6},
    {15, 4}, {15, 5},
    {16, 4}
};

const struct Coord center[numCenter] = {
    {4, 8}, {4, 9}, {4, 10}, {4, 11}, {4, 12},
    {5, 7}, {5, 8}, {5, 9}, {5, 10}, {5, 11}, {5, 12},
    {6, 6}, {6, 7}, {6, 8}, {6, 9}, {6, 10}, {6, 11}, {6, 12},
    {7, 5}, {7, 6}, {7, 7}, {7, 8}, {7, 9}, {7, 10}, {7, 11}, {7, 12},
    {8, 4}, {8, 5}, {8, 6}, {8, 7}, {8, 8}, {8, 9}, {8, 10}, {8, 11}, {8, 12},
    {9, 4}, {9, 5}, {9, 6}, {9, 7}, {9, 8}, {9, 9}, {9, 10}, {9, 11},
    {10, 4}, {10, 5}, {10, 6}, {10, 7}, {10, 8}, {10, 9}, {10, 10},
    {11, 4}, {11, 5}, {11, 6}, {11, 7}, {11, 8}, {11, 9},
    {12, 4}, {12, 5}, {12, 6}, {12, 7}, {12, 8},
};

const struct Coord corners[6][10] = {
    {
        {0, 12},
        {1, 11}, {1, 12},
        {2, 10}, {2, 11}, {2, 12},
        {3, 9}, {3, 10}, {3, 11}, {3, 12}
    },
    {
        {4, 13}, {4, 14}, {4, 15}, {4, 16},
        {5, 13}, {5, 14}, {5, 15},
        {6, 13}, {6, 14},
        {7, 13}
    },
    {
        {9, 12},
        {10, 11}, {10, 12},
        {11, 10}, {11, 11}, {11, 12},
        {12, 9}, {12, 10}, {12, 11}, {12, 12}
    },
    {
        {13, 4}, {13, 5}, {13, 6}, {13, 7},
        {14, 4}, {14, 5}, {14, 6},
        {15, 4}, {15, 5},
        {16, 4}
    },
    {
        {9, 3},
        {10, 2}, {10, 3},
        {11, 1}, {11, 2}, {11, 3},
        {12, 0}, {12, 1}, {12, 2}, {12, 3}
    },
    {
        {4, 4}, {4, 5}, {4, 6}, {4, 7},
        {5, 4}, {5, 5}, {5, 6},
        {6, 4}, {6, 5},
        {7, 4}
    }
};