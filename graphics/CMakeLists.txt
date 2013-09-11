file(GLOB ROOT_GRAPHICS_SRC "*.h" "*.cpp")

file(GLOB FREEGLUT_SRC "freeglut/*.h" "freeglut/*.cpp")
file(GLOB GLEW_SRC "glew/*.h" "glew/*.cpp")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/gli)

set(GRAPHICS_SRC ${ROOT_GRAPHICS_SRC} ${FREEGLUT_SRC} ${GLEW_SRC} ${GLI_SRC})

include_directories(${CMAKE_SOURCE_DIR}/shared)

add_library(graphics ${GRAPHICS_SRC})

source_group(freeglut FILES ${FREEGLUT_SRC})
source_group(glew FILES ${GLEW_SRC})
source_group(gli FILES ${GLI_SRC})

SET_TARGET_PROPERTIES(graphics PROPERTIES LINKER_LANGUAGE CXX)