    #include "main_test.h"

    TEST(CHECK, FUNCTION_A)
    {
    ASSERT_TRUE(checker());
    }

    TEST(CHECK, FUNCTION_B)
    {
    ASSERT_TRUE(Bchecker());
    }

    int main(int argc, char **argv)
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }

I
