project(review_library)

add_library(review_library "dna.cpp" "dna.h" "grade.cpp" "grade.h" "receipt.cpp"
							"receipt.h" "shape.cpp" "shape.h" "references.cpp" "references.h")
add_executable(review_exe "main.cpp" "dna.cpp" "grade.cpp" "receipt.cpp" "shape.cpp")
target_link_libraries(review_exe review_library)