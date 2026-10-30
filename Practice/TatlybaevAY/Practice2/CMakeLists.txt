add_executable(Practice2_TatlybaevAY ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_include_directories(Practice2_TatlybaevAY PRIVATE ${CMAKE_SOURCE_DIR}/LibraryCPPTemplate)

add_test(NAME Practice2_TatlybaevAY_test1
    COMMAND ${CMAKE_COMMAND}
    -DEXE=$<TARGET_FILE:Practice2_TatlybaevAY>
    -DINPUT=${CMAKE_CURRENT_SOURCE_DIR}/input1.txt
    -DEXPECTED=${CMAKE_CURRENT_SOURCE_DIR}/output1.txt
    -P ${CMAKE_SOURCE_DIR}/Practice/test.cmake)

add_test(NAME Practice2_TatlybaevAY_test2
    COMMAND ${CMAKE_COMMAND}
    -DEXE=$<TARGET_FILE:Practice2_TatlybaevAY>
    -DINPUT=${CMAKE_CURRENT_SOURCE_DIR}/input2.txt
    -DEXPECTED=${CMAKE_CURRENT_SOURCE_DIR}/output2.txt
    -P ${CMAKE_SOURCE_DIR}/Practice/test.cmake)

add_test(NAME Practice2_TatlybaevAY_test3
    COMMAND ${CMAKE_COMMAND}
    -DEXE=$<TARGET_FILE:Practice2_TatlybaevAY>
    -DINPUT=${CMAKE_CURRENT_SOURCE_DIR}/input3.txt
    -DEXPECTED=${CMAKE_CURRENT_SOURCE_DIR}/output3.txt
    -P ${CMAKE_SOURCE_DIR}/Practice/test.cmake)

add_test(NAME Practice2_TatlybaevAY_test4
    COMMAND ${CMAKE_COMMAND}
    -DEXE=$<TARGET_FILE:Practice2_TatlybaevAY>
    -DINPUT=${CMAKE_CURRENT_SOURCE_DIR}/input4.txt
    -DEXPECTED=${CMAKE_CURRENT_SOURCE_DIR}/output4.txt
    -P ${CMAKE_SOURCE_DIR}/Practice/test.cmake)

add_test(NAME Practice2_TatlybaevAY_test5
    COMMAND ${CMAKE_COMMAND}
    -DEXE=$<TARGET_FILE:Practice2_TatlybaevAY>
    -DINPUT=${CMAKE_CURRENT_SOURCE_DIR}/input5.txt
    -DEXPECTED=${CMAKE_CURRENT_SOURCE_DIR}/output5.txt
    -P ${CMAKE_SOURCE_DIR}/Practice/test.cmake)

add_test(NAME Practice2_TatlybaevAY_test6
    COMMAND ${CMAKE_COMMAND}
    -DEXE=$<TARGET_FILE:Practice2_TatlybaevAY>
    -DINPUT=${CMAKE_CURRENT_SOURCE_DIR}/input6.txt
    -DEXPECTED=${CMAKE_CURRENT_SOURCE_DIR}/output6.txt
    -P ${CMAKE_SOURCE_DIR}/Practice/test.cmake)

add_test(NAME Practice2_TatlybaevAY_test7
    COMMAND ${CMAKE_COMMAND}
    -DEXE=$<TARGET_FILE:Practice2_TatlybaevAY>
    -DINPUT=${CMAKE_CURRENT_SOURCE_DIR}/input7.txt
    -DEXPECTED=${CMAKE_CURRENT_SOURCE_DIR}/output7.txt
    -P ${CMAKE_SOURCE_DIR}/Practice/test.cmake)