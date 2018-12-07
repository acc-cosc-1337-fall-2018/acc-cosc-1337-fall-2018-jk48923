project(exam_review_2_library)

add_library(exam_review_2_library "test.cpp" "test.h")
add_executable(exam_review_2_exe "main.cpp" "test.cpp")
target_link_libraries(exam_review_2_exe exam_review_2_library)
