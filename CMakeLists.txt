cmake_minimum_required(VERSION 3.0.0)
project(SerialTest VERSION 0.1.0)

set(SOURCES
    main.cpp
    enumserial.h
    enumserial.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
