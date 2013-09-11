file(GLOB_RECURSE GAME_SRC
    "*.h"
    "*.cpp"
)

include_directories(${CMAKE_SOURCE_DIR}/graphics)
include_directories(${CMAKE_SOURCE_DIR}/shared)
add_library(game STATIC ${GAME_SRC})
SET_TARGET_PROPERTIES(game PROPERTIES LINKER_LANGUAGE CXX)