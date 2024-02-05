cmake_minimum_required(VERSION 3.5)

project(QScintillaExample)

# Find the required Qt5 components
find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

# Find QScintilla
find_package(QScintilla REQUIRED)

# Define the executable
add_executable(${PROJECT_NAME} main.cpp)

# Use the `ui` files if you have any - not used in this minimal example

# Specify include directories
target_include_directories(${PROJECT_NAME} PRIVATE ${QSCINTILLA_INCLUDE_DIR})

# Link against the Qt5 and QScintilla libraries
target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Core Qt5::Gui QScintilla::QScintilla)
