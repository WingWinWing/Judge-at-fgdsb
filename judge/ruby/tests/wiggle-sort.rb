@num_test = 100
@in_0 = []
@in_org_0 = []
@out = []

def test_wiggle(arr)
    return true if arr.nil? || arr.length == 0
    test_flag = true
    (0...arr.length-1).each do |i|
        if test_flag
            return false if arr[i] > arr[i+1]
        else
            return false if arr[i] < arr[i+1]
        end
        test_flag = !test_flag;
    end
    true
end

def load_test
    f = File.new("judge/tests/wiggle-sort.txt")
    @in_0 = read_int_matrix(f)
    @in_org_0 = @in_0.dup
    @out = read_int_matrix(f)
    f.close
end

def judge
    load_test
    capture_stdout

    start_time = Time.now

    (0...@num_test).each do |i|
       puts 'Testing case #' + (i+1).to_s
        answer = wiggle_sort(@in_0[i]) 
        answer = @in_0[i]
        if (!test_wiggle(@in_0[i]))
            release_stdout
            print "#{i+1} / #{@num_test};"
            print @in_org_0[i].to_s
            print ';'
            print answer.to_s
            print ';'
            print @out[i].to_s
            puts
            return
        end
    end

    release_stdout
    runtime = (Time.now - start_time) * 1000.0
    puts('Accepted;' + runtime.to_i.to_s)
end
