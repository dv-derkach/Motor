motor_create_target()

target_link_libraries(${MOTOR_CURRENT_TARGET_NAME} volk Core)

add_dependencies(${MOTOR_CURRENT_TARGET_NAME} volk Core)
