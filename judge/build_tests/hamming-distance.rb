require './common'
require '../ruby/common'

class Test_hamming_distance < TestBase
  def initialize(name)
    super(name)
  end

  def add_test
  end

  def gen_tests
    @test_in, @test_out = [[]], []
  end
end

Test_hamming_distance.new 'hamming-distance'