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
    // ��������� ����������
    st.testDevice();


    // ����������� ����� �� �����������
    st.setDevice(&ac);
    // ��������� �������������
    st.testDevice();


}

