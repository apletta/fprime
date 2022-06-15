# Register the standard build
set(SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/MathSender.fpp"  
  "${CMAKE_CURRENT_LIST_DIR}/MathSender.cpp"
)
register_fprime_module()

# Register the unit test build
set(UT_SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/MathSender.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/test/ut/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/test/ut/Tester.cpp"
)
# Random testing
set(UT_MOD_DEPS STest)

register_fprime_ut()
