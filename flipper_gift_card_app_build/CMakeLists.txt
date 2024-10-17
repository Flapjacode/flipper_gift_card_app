cmake_minimum_required(VERSION 3.10)
project(GiftCardApp)

# Add path to Flipper Zero SDK includes
include_directories(/path/to/flipper_sdk/include)

set(SOURCE_FILES
    src/main.c
    src/wifi.c
    src/barcode.c
    src/api.c
)

add_executable(GiftCardApp ${SOURCE_FILES})
