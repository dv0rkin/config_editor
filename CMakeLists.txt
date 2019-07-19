cmake_minimum_required(VERSION 3.12)

project(config_editor)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(AUTOMOC ON)

file(GLOB SOURCE "src/*.cpp")
file(GLOB SOURCE_GUI "gui/src/*.cpp")

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_executable(${PROJECT_NAME} ${SOURCE} ${SOURCE_GUI})

target_include_directories(
    ${PROJECT_NAME}
        PRIVATE
            "include"
            "gui/include"
)

target_link_libraries(
    ${PROJECT_NAME}
        PRIVATE
            Qt5::Core
            Qt5::Widgets
)

