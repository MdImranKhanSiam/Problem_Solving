def tax(money):
    total_tax = 0
    money_left = money
    additional = 0
    higher = 0
    basic = 0
    allowance = 0
    reduction = 0

    if money_left > 150000:
        additional = money_left-150000
        money_left = 150000
    
    if money_left > 50000:
        higher = money_left-50000
        money_left = 50000

    if money_left > 12500:
        basic = money_left-12500
        money_left = 12500

    if money_left >= 0:
        allowance = money_left

        if money > 100000:
            reduction = min(12500,(money-100000)/2)
            allowance -= reduction
    
    total_tax += (reduction/100)*40
    total_tax += (basic/100)*20
    total_tax += (higher/100)*40
    total_tax += (additional/100)*45

    # print(reduction)
    # print(allowance)
    # print(basic)
    # print(higher)
    # print(additional)

    return total_tax

tc = int(input())

for _ in range(tc):
    target_tax = float(input())
    low = 0
    high = int(1e18)
    result = 0

    while low <= high:
        mid = (low+high)/2

        if target_tax <= tax(mid):
            high = mid-0.000001
            result = mid
        else:
            low = mid+0.000001

    result = round(result,2)
    print(result)
