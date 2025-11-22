import os
import json
import random

with open('qn_ans.json','r') as file:
    store = json.load(file)

total = 10

actually_ai_but_user_answerd_human = 0
actually_human_but_user_answerd_ai = 0

for i in range(1, total + 1):
    os.system('cls' if os.name == 'nt' else 'clear')

    Question = store['Question'][i]['qn']
    Answer = ""
    Ai_Or_Human = random.randint(0,1)
    
    if Ai_Or_Human == 0:
        Answer = store['Question'][i]['ai_ans']
    elif Ai_Or_Human == 1:
        Answer = store['Question'][i]['human_ans']

    print("\t\t\t<<<<<< Turing Test >>>>>>\n")
    print(f"\t\t\t\tQuestion --> {i}\n")
    print(Question)
    print("\n")
    print("\t\t\t\t   Answer\n\n")
    print(Answer)
    print("\n\n")
    print("------------------------------------------------------")
    print("If you think the answer is given by an Ai      Type A or Ai\n")
    print("If you think the answer is given by a Human    Type H or Human\n")

    while True:
        choice = input("Enter Your Choice: ")

        if choice in ['A', 'a', 'Ai', 'ai'] :
            if Ai_Or_Human == 1:
                actually_human_but_user_answerd_ai += 1
            break
        elif choice in ['H', 'h', 'Human', 'human']:
            if Ai_Or_Human == 0:
                actually_ai_but_user_answerd_human += 1
            break
        else:
            print("Wrong Key Was Pressed")
            input()
       
    print("\n")
    input("Press Any Key To Continue...")

os.system('cls' if os.name == 'nt' else 'clear')

print("\t\t\t\tTuring Test Result\n\n\n")
print(f"Actually answered by Ai but user thought it was Human: {actually_ai_but_user_answerd_human}\n\n\n")
print(f"Actually answered by Human but user thought it was Ai: {actually_human_but_user_answerd_ai}\n\n\n")
success_rate = (actually_ai_but_user_answerd_human/total)*100
print(f'Turing Test Success Rate: {success_rate}%')
print("\n\n\n")