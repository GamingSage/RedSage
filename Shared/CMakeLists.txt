
file(GLOB SHARED_SRC
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

add_executable(shared ${SHARED_SRC} )

source_group("OpenGL" FILES ${GL_HEADERS})

set(GLM_DIR ${CMAKE_SOURCE_DIR}/glm)
set(GLI_DIR ${CMAKE_SOURCE_DIR}/gli)

include_directories(
${GLM_DIR}
${GLI_DIR}
${GLM_DIR}/core
${GLM_DIR}/gtc
${GLM_DIR}/gtx
${GLM_DIR}/virtrev
${GLI_DIR}/core
${GLI_DIR}/gtx)

target_link_libraries(shared ${CMAKE_SOURCE_DIR}/OpenGL/lib/freeglut.lib)
SET_TARGET_PROPERTIES(shared PROPERTIES LINKER_LANGUAGE CXX)