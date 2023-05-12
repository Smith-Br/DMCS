a = int(input("len(nums): "))
for i in range(a):
    nums[i] = int(input("enter nums", i, ": "))
b = int(input("target: "))
for i in range(len(nums)):
    for k in range(i+1, len(nums)):
        if nums[i] + nums[k] == target:
            print("[", nums[i], ", ", nums[k], "]")
            break
