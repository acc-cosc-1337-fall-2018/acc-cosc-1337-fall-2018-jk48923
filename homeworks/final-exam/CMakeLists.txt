project(final_exam_library)

add_library(final_exam_library "test.cpp" "test.h")
add_executable(final_exam_exe "main.cpp" "test.cpp")
target_link_libraries(final_exam_exe final_exam_library)
