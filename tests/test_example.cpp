#include "gtest/gtest.h"
#include "../src/example.h"

TEST(ExampleTest, AddsTwoNumbers)
{
    EXPECT_EQ(add(1, 2), 3);
}

TEST(ExampleTest, SubtractsTwoNumbers)
{
    EXPECT_EQ(subtract(2, 1), 1);
}

// 由于上文tests目录下CMakeLists.txt文件中链接了gtest_main库（ target_link_libraries(runTests gtest gtest_main core) ），所以此处main()函数不用自己定义
// 如果tests目录下CMakeLists.txt文件中没有链接gtest_main库，此处需要自己定义main()函数，如下面注释
// 链接gtest_main库和自己定义main()函数两者只能存在一个，并且至少存在一个
/*
int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
*/
