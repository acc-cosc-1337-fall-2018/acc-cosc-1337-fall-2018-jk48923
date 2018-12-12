project(final_exam_library)

add_library(final_exam_library "receipt.cpp" "receipt.h" "test.cpp" "test.h" "test3.cpp" "test3.h" "test4.h" "test4.cpp"
													"TaxExemptReceipt.h" "TaxExemptReceipt.cpp" "shape.h" "shape.cpp")
add_executable(final_exam_exe "main.cpp" "receipt.cpp" "test.cpp" "test3.cpp" "test4.cpp" "TaxExemptReceipt.cpp" "shape.cpp")
target_link_libraries(final_exam_exe final_exam_library)