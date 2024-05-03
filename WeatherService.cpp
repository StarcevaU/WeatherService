// WeatherService.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Weather.h"
#include "XmlService.h"
using namespace std;
int main()
{    
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");

}
