cmake_minimum_required(VERSION 3.15)

project(cherver VERSION 0.1)                        

add_library(cherver SHARED
  socket.c rio.c request.c parser.c logger.c response.c server.c http.c
)
              
target_include_directories(cherver PUBLIC
  "${PROJECT_BINARY_DIR}"
)
                           
install(TARGETS cherver DESTINATION lib)
install(FILES socket.h rio.h request.h parser.h logger.h response.h server.h http.h
  DESTINATION include
)
