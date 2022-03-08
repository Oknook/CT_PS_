n = int(input())

last_num_in_file = [1]

find_index = lambda x: 6*x

if n == 1:
    print(1)
else:
    for i in range(1,100):
        new_lastNum = last_num_in_file[-1] + find_index(i)
        last_num_in_file.append(new_lastNum)
        if n <= new_lastNum:
            print(len(last_num_in_file))
            break
