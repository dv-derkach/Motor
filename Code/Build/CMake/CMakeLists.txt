get_filename_component(TARGET_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)

file(
    GLOB_RECURSE TARGET_SOURCES CONFIGURE_DEPENDS "*.cmake"
)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${TARGET_SOURCES})

add_custom_target(${TARGET_NAME} SOURCES ${TARGET_SOURCES})

set_target_properties(${TARGET_NAME} PROPERTIES FOLDER "Build")
