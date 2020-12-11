cmake_minimum_required(VERSION 3.17)
project(POO)

set(CMAKE_CXX_STANDARD 20)

add_executable(POO main.cpp CPP/Client.cpp Headers/Client.h CPP/Angajat.cpp Headers/Angajat.h CPP/Film.cpp Headers/Film.h CPP/Serial.cpp Headers/Serial.h)