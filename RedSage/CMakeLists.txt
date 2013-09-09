file(GLOB REDSAGE_SRC
    "*.h"
    "*.cpp"
)

add_executable(RedSage ${REDSAGE_SRC})
include_directories(${CMAKE_SOURCE_DIR}/maplib)
include_directories(${CMAKE_SOURCE_DIR}/Shared)
include_directories(${CMAKE_SOURCE_DIR}/OpenGL/include)
target_link_libraries(RedSage ${CMAKE_SOURCE_DIR}/Shared/OpenGL/lib/freeglut.lib)

set(OpenGL_DLL ${CMAKE_SOURCE_DIR}/OpenGL/bin/freeglut.dll)