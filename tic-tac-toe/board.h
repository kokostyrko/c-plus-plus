#pragma once

class Board
{
    private:
    int width;
    int height;
    /*указатель на массив указателей (символов), где каждый указатель представляет строку символов 
    (определяет игровое поле)*/
    char** cells;

    public:
    Board(int width, int height);

    //выводит игровое поле на экран
    void print();
};