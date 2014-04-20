#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "faktoros.h"

bool ArraysMatch(unsigned long long int *expected,unsigned long long int *actual,int dara)//összehasonlitáshoz
{
	int i=0;  
		if(dara==0)
			{return false;}     
	 	for (i=0; i < (dara); i++)
		{
           		 if (expected[i] != actual[i])
			{
               		 return false;
            		}
       		 }

        return true;
}

TEST(HelloWorldTest, helloworld)
{
		unsigned long long int elso[]={53,34};
		unsigned long long int elsok[]={53};
		char p[30]="53";
		int darabok=0;
		unsigned long long int harmadik[30];
		faktoros(p,&darabok,harmadik);

		EXPECT_FALSE(ArraysMatch(elso, harmadik,2));
		EXPECT_TRUE(ArraysMatch(elsok, harmadik,darabok));
		EXPECT_EQ(elso[0],harmadik[0]);
}
TEST(HelloWorldTest, helloworld2)
{
		unsigned long long int elso[]={53,34};
		char p[30]="53";
		int darabok=0;
		unsigned long long int harmadik[30];
		faktoros(p,&darabok,harmadik);
		EXPECT_EQ(elso[0],harmadik[0]);
}

TEST(HelloWorldTest, ketszam)
{
		unsigned long long int elsok[]={2,2};
		char p[30]="4";
		int darabok=0;
		unsigned long long int harmadik[30];
		faktoros(p,&darabok,harmadik);

		EXPECT_TRUE(ArraysMatch(elsok, harmadik,darabok));
		
}

TEST(HelloWorldTest,rosszbemenet)
{
		unsigned long long int elsok[]={45};
		char p[30]="w";
		int darabok=0;
		unsigned long long int harmadik[30];
		faktoros(p,&darabok,harmadik);

		EXPECT_FALSE(ArraysMatch(elsok, harmadik,darabok));
		
}

TEST(HelloWorldTest,negativbemenet)
{
		unsigned long long int elsok[]={45};
		char p[30]="-56";
		int darabok=0;
		unsigned long long int harmadik[30];
		faktoros(p,&darabok,harmadik);

		EXPECT_FALSE(ArraysMatch(elsok, harmadik,darabok));
		
}
int main(int argc,char **argv)
{


	::testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();

}
