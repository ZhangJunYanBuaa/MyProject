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

// ��������testsĿ¼��CMakeLists.txt�ļ���������gtest_main�⣨ target_link_libraries(runTests gtest gtest_main core) �������Դ˴�main()���������Լ�����
// ���testsĿ¼��CMakeLists.txt�ļ���û������gtest_main�⣬�˴���Ҫ�Լ�����main()������������ע��
// ����gtest_main����Լ�����main()��������ֻ�ܴ���һ�����������ٴ���һ��
/*
int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
*/
