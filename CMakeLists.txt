cmake_minimum_required(VERSION 3.5)

project(QScintillaExample)

# To let CMake find cmake\Modules\FindQt5QScintilla.cmake
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules")

# Find the required Qt5 components
find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

# Find QScintilla
find_package(Qt5QScintilla 2.8.0 REQUIRED QUIET)
#find_package(QScintilla REQUIRED)

#MESSAGE( STATUS "QT5QSCINTILLA_INCLUDE_DIRS ${QT5QSCINTILLA_INCLUDE_DIRS}")
#MESSAGE( STATUS "QT5QSCINTILLA_LIBRARY ${QT5QSCINTILLA_LIBRARY}")

# Define the executable
add_executable(${PROJECT_NAME} WIN32 main.cpp)

# Append 'd' suffix for debug builds, but only on Windows
if(WIN32)
  set_target_properties(${PROJECT_NAME} PROPERTIES
    DEBUG_POSTFIX "d"
  )
endif()

# Specify include directories
# We do not have to specify Qt headers here; this is handled indirectly by the Qt CMake modules that are called through
# target_link_libraries().
target_include_directories(${PROJECT_NAME} PRIVATE ${QT5QSCINTILLA_INCLUDE_DIRS})

# Link against the Qt5 and QScintilla libraries
target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Core Qt5::Gui ${QT5QSCINTILLA_LIBRARY})
