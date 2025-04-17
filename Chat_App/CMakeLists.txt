cmake_minimum_required(VERSION 3.5)

project(ChatApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)  # optional, if using .qrc
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(ChatApp
    main.cpp
)

target_link_libraries(ChatApp Qt5::Widgets)

