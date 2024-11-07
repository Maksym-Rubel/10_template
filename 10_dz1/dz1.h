#pragma once



template <typename T = int, size_t row = 2, size_t col = 3>
class Array {

public:
    Array() = default;
    size_t getSize() const;

private:
    T matrix[row][col]{};

};



