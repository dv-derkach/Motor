function(motor_create_target_group)
    get_filename_component(CURRENT_TARGET_GROUP ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)

    if(MOTOR_CURRENT_TARGET_GROUP)
        set(CURRENT_TARGET_GROUP "${MOTOR_CURRENT_TARGET_GROUP}/${CURRENT_TARGET_GROUP}")
    endif()

    set(MOTOR_CURRENT_TARGET_GROUP ${CURRENT_TARGET_GROUP} PARENT_SCOPE)
endfunction()
