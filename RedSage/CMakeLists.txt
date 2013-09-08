file(GLOB_RECURSE REDSAGE_SRC
    "*.h"
    "*.cpp"
)

add_executable(RedSage ${REDSAGE_SRC})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GL)
include_directories(${CMAKE_SOURCE_DIR}/maplib)
include_directories(${CMAKE_SOURCE_DIR}/Shared)

TARGET_LINK_LIBRARIES(RedSage ${CMAKE_CURRENT_SOURCE_DIR}/lib/freeglut.lib)
