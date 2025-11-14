import math

def forward_pass():
    net_h1 = (weight_1*input_1)+(weight_2*input_2)+(bias_1*1)
    net_h2 = (weight_3*input_1)+(weight_4*input_2)+(bias_1*1)
    out_h1 = 1/(1+(math.exp(-net_h1)))
    out_h2 = 1/(1+(math.exp(-net_h2)))

    net_o1 = (weight_5*out_h1)+(weight_6*out_h2)+(bias_2*1)
    net_o2 = (weight_7*out_h1)+(weight_8*out_h2)+(bias_2*1)
    out_o1 = 1/(1+(math.exp(-net_o1)))
    out_o2 = 1/(1+(math.exp(-net_o2)))

    error_output_1 = (1/2)*pow(target_output_1-out_o1,2)
    error_output_2 = (1/2)*pow(target_output_2-out_o2,2)
    error_total = error_output_1+error_output_2

    return out_h1,out_h2,out_o1,out_o2,error_output_1,error_output_2,error_total

def back_propagation():
    error_weight_5 = (out_o1-target_output_1)*(out_o1*(1-out_o1))*out_h1
    error_weight_6 = (out_o1-target_output_1)*(out_o1*(1-out_o1))*out_h2
    error_weight_7 = (out_o2-target_output_2)*(out_o2*(1-out_o2))*out_h1
    error_weight_8 = (out_o2-target_output_2)*(out_o2*(1-out_o2))*out_h2

    weight_5_new = weight_5-(eta_learning_rate*error_weight_5)
    weight_6_new = weight_6-(eta_learning_rate*error_weight_6)
    weight_7_new = weight_7-(eta_learning_rate*error_weight_7)
    weight_8_new = weight_8-(eta_learning_rate*error_weight_8)

    error_weight_1 = ((out_o1-target_output_1)*(out_o1*(1-out_o1))*weight_5)+((out_o2-target_output_2)*(out_o2*(1-out_o2))*weight_7)*((out_h1*(1-out_h1))*input_1)
    error_weight_2 = ((out_o1-target_output_1)*(out_o1*(1-out_o1))*weight_5)+((out_o2-target_output_2)*(out_o2*(1-out_o2))*weight_7)*((out_h1*(1-out_h1))*input_2)
    error_weight_3 = ((out_o1-target_output_1)*(out_o1*(1-out_o1))*weight_6)+((out_o2-target_output_2)*(out_o2*(1-out_o2))*weight_8)*((out_h2*(1-out_h2))*input_1)
    error_weight_4 = ((out_o1-target_output_1)*(out_o1*(1-out_o1))*weight_6)+((out_o2-target_output_2)*(out_o2*(1-out_o2))*weight_8)*((out_h2*(1-out_h2))*input_2)

    weight_1_new = weight_1-(eta_learning_rate*error_weight_1)
    weight_2_new = weight_2-(eta_learning_rate*error_weight_2)
    weight_3_new = weight_3-(eta_learning_rate*error_weight_3)
    weight_4_new = weight_4-(eta_learning_rate*error_weight_4)

    return weight_1_new,weight_2_new,weight_3_new,weight_4_new,weight_5_new,weight_6_new,weight_7_new,weight_8_new


eta_learning_rate = 0.1
input_1 = 0.05
input_2 = 0.10
target_output_1 = 0.01
target_output_2 = 0.99
weight_1 = 0.15
weight_2 = 0.20
weight_3 = 0.25
weight_4 = 0.30
weight_5 = 0.40
weight_6 = 0.45
weight_7 = 0.50
weight_8 = 0.55
bias_1 = 0.35
bias_2 = 0.60


iteration = 50000

for iter in range(iteration):
    # print(f'\n\nIteration {iter+1}')

    out_h1,out_h2,out_o1,out_o2,error_output_1,error_output_2,error_total = forward_pass()

    # print(f'Weight 1: {weight_1:.2f}')
    # print(f'Weight 2: {weight_2:.2f}')
    # print(f'Weight 3: {weight_3:.2f}')
    # print(f'Weight 4: {weight_4:.2f}')
    # print(f'Weight 5: {weight_5:.2f}')
    # print(f'Weight 6: {weight_6:.2f}')
    # print(f'Weight 7: {weight_7:.2f}')
    # print(f'Weight 8: {weight_8:.2f}')
    # print(f'Output 1: {out_o1:.2f}')
    # print(f'Output 2: {out_o2:.2f}')

    if out_o1 == target_output_1 and out_o2 == target_output_2:
        break

    weight_1,weight_2,weight_3,weight_4,weight_5,weight_6,weight_7,weight_8 = back_propagation()

print(f'Final Result')

print(f'Weight 1: {weight_1:.2f}')
print(f'Weight 2: {weight_2:.2f}')
print(f'Weight 3: {weight_3:.2f}')
print(f'Weight 4: {weight_4:.2f}')
print(f'Weight 5: {weight_5:.2f}')
print(f'Weight 6: {weight_6:.2f}')
print(f'Weight 7: {weight_7:.2f}')
print(f'Weight 8: {weight_8:.2f}')
print(f'Output 1: {out_o1:.2f}')
print(f'Output 2: {out_o2:.2f}')