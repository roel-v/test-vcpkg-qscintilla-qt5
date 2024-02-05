rem vcpkg install

mkdir build


rem --trace ^
cmake -B build -S . ^
    -DCMAKE_TOOLCHAIN_FILE=d:/vcpkg/scripts/buildsystems/vcpkg.cmake ^
    -DCMAKE_PREFIX_PATH=e:\Dropbox\bin\win_flex_bison-2.5.25

rem cmake --build build
