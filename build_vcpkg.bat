vcpkg install

mkdir build

cmake -B build -S . ^
    -DCMAKE_TOOLCHAIN_FILE=d:/vcpkg/scripts/buildsystems/vcpkg.cmake

cmake --build build --config Debug
cmake --build build --config Release
