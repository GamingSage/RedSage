
file(GLOB_RECURSE SHARED_SRC
    "*.h"
    "*.cpp"
)

set(GL_HEADERS 
OpenGL/include/freeglut.h
OpenGL/include/freeglut_ext.h
OpenGL/include/freeglut_std.h
OpenGL/include/glut.h
OpenGL/include/glew.h
OpenGL/include/glxew.h
OpenGL/include/wglew.h)

add_library(shared STATIC ${SHARED_SRC} )

source_group("OpenGL" FILES ${GL_HEADERS})

target_link_libraries(shared ${CMAKE_SOURCE_DIR}/OpenGL/lib/freeglut.lib)
SET_TARGET_PROPERTIES(shared PROPERTIES LINKER_LANGUAGE CXX)