#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
   	 EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, newLineString) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "\n";
	EXPECT_EQ("\n", echo(2, test_val));
}

TEST(EchoTest, ReallyLongString) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "Create three test cases in addition to the two we've already created, and commit it all to your repository as your submission.";
	EXPECT_EQ("Create three test cases in addition to the two we've already created, and commit it all to your repository as your submission.", echo(2, test_val));
}

TEST(EchoTest, MultipleSpace) {
	char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "Welcome"; test_val[2] = "to"; test_val[3] = "CS"; test_val[4] = "100"; test_val[5] = "Class!";
	EXPECT_EQ("Welcome to CS 100 Class!", echo(6, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
