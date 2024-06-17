# 指定测试可执行文件
add_executable(runTests test_example.cpp)

# 链接 Google Test 的库和应用库
target_link_libraries(runTests gtest gtest_main core)

# 启用测试
enable_testing()

# 添加测试
add_test(NAME example_tests COMMAND runTests)
