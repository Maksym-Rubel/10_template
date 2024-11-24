#include <iostream>
#include "Pilt.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    TV tv;
    AirConditioner ac;
    smartRemote st(&tv);
    // управління телевізором
    st.testDevice();


    // переключаємо пульт на кондиціонер
    st.setDevice(&ac);
    // управління кондиціонером
    st.testDevice();


}

