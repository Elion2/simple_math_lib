TEST(MathLibTest, PrimesInRange) {
    std::vector<int> expected = {2, 3, 5, 7};
    EXPECT_EQ(get_primes_in_range(1, 10), expected);
}
