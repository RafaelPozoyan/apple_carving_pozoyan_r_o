include_directories(.)

#add_executable (apple_carving apple_carving.cpp DelaunayTriangulationAlgorithm/src/models.cpp apple_carving.hpp DelaunayTriangulationAlgorithm\src\scanline_triangulation.cpp)
#target_link_libraries(apple_carving DelaunayTriangulationAlgorithm)

add_executable( apple_carving apple_carving.cpp )

target_link_libraries(apple_carving PRIVATE ${OpenCV_LIBS})
#target_link_libraries(apple_carving PRIVATE opencv_ml opencv_dnn opencv_core opencv_flann)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET apple_carving PROPERTY CXX_STANDARD 20)
endif()



