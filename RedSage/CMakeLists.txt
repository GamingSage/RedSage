file(GLOB REDSAGE_SRC
    "*.h"
    "*.cpp"
)

add_executable(RedSage ${REDSAGE_SRC})
include_directories(${CMAKE_SOURCE_DIR}/game)
include_directories(${CMAKE_SOURCE_DIR}/shared)
include_directories(${CMAKE_SOURCE_DIR}/graphics)
include_directories(${CMAKE_SOURCE_DIR}/gui)
include_directories(${CMAKE_SOURCE_DIR}/input)
include_directories(${CMAKE_SOURCE_DIR}/network)
target_link_libraries(RedSage ${CMAKE_SOURCE_DIR}/graphics/lib/freeglut.lib)

set(OpenGL_DLL ${CMAKE_SOURCE_DIR}/OpenGL/bin/freeglut.dll)