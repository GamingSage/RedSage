file(GLOB_RECURSE GAME_SRC
    "*.h"
    "*.cpp"
)
include_directories(${CMAKE_SOURCE_DIR}/Shared)
add_library(game STATIC ${GAME_SRC})
SET_TARGET_PROPERTIES(game PROPERTIES LINKER_LANGUAGE CXX)