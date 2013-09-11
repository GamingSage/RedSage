file(GLOB_RECURSE GUI_SRC "*.h" "*.cpp")

include_directories(${CMAKE_SOURCE_DIR}/graphics)

add_executable(gui ${GUI_SRC})
SET_TARGET_PROPERTIES(gui PROPERTIES LINKER_LANGUAGE CXX)