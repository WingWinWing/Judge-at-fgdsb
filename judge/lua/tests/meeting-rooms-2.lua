require("../solution")

local num_test = 121
local in_0 = {}
local in_org_0 = {}
local out = {}


function load_test()
    local f = io.open("./judge/tests/meeting-rooms-2.txt", "r")
    in_0 = read_interval_matrix(f)
    in_org_0 = copy(in_0)
    out = read_num_array(f)
    f:close()
end

function judge()
    load_test()
    capture_stdout()

    local start = os.clock()
    for i = 1, num_test do
        print("Testing case #" .. i)
        local answer = min_rooms(in_0[i]) 
        if answer ~= out[i] then
            io.write(string.format("%d / %d;", i, num_test))
            io.write(to_string(in_org_0[i]))
            io.write(";")
            io.write(to_string(answer))
            io.write(";")
            io.write(to_string(out[i]))
            io.write("\n")
            return
        end
    end

    release_stdout()
    local elapsed = math.floor((os.clock() - start) * 1000)
	print("Accepted;" .. elapsed)
end
