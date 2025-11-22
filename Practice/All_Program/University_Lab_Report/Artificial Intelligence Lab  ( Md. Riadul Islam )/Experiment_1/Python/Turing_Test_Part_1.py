import os

total = 10

question = [""] * (total + 1)
answer = [""] * (total + 1)

human = [0] * (total + 1)
ai = [0] * (total + 1)

actually_ai_but_user_answerd_human = 0
actually_human_but_user_answerd_ai = 0

human[1] = 1
human[2] = 1
human[8] = 1
human[9] = 1

ai[3] = 1
ai[4] = 1
ai[5] = 1
ai[6] = 1
ai[7] = 1
ai[10] = 1

question[1] = "Why do people smile?"
answer[1] = "People smile when they feel happiness and joy. And also when they try to hide their pain and sadness they smile at people."

question[2] = "What would you do if it started raining suddenly?"
answer[2] = "Often when it rains, I like to get wet in the rain and it gives me a different kind of feeling and vibe. But most of the time when it rains, I avoid getting wet so that I don’t get sick."

question[3] = "What's something people do that you find annoying?"
answer[3] = "I get bothered when people are constantly late without letting anyone know. It feels like they don't respect other people's time, and it can mess up plans. I think a quick message or call to explain would make a big difference."

question[4] = "Explain how the internet works in simple terms."
answer[4] = "The internet is a global network that connects computers and devices using cables, satellites, and wireless signals. When you visit a website, your computer sends a request through your internet service provider to a server where that website is stored. The server sends back the website's data, which your browser displays. It's like sending and receiving letters instantly, using digital addresses called IP addresses."

question[5] = "How would you plan a trip?"
answer[5] = "Choose where to go, book transport and hotels, plan places to visit, pack your things, and get ready to travel."

question[6] = "Can you describe your perfect weekend?"
answer[6] = "My perfect weekend would start with sleeping in late, then having a relaxed breakfast. I'd spend the afternoon outside, maybe visiting a park or meeting friends, and end the day watching a movie or reading a book at home."

question[7] = "Describe how it feels to wait for exam results."
answer[7] = "Waiting for exam results feels stressful and nervous. You keep imagining all the possible outcomes and refresh the results page over and over. But once you get the results, there's a big relief, whatever the outcome."

question[8] = "Why do we need sleep?"
answer[8] = "Sleep is a necessary activity for humans. Humans need 6-8 hours of sleep a day to keep their body and mental health in check. Lack of sleep can cause dizziness and hallucinations and can cause health and brain damage which can sometimes be permanent."

question[9] = "What is the difference between a smartphone and a laptop?"
answer[9] = "The difference between a smartphone and a laptop is that you can carry and hold your smartphone in your hand. Laptop is more preferable to use on a desk or in lap thus the name laptop."

question[10] = "Describe a tradition in your family."
answer[10] = "In my family, during Eid, we prepare a big meal and invite relatives and neighbors. Everyone wears new clothes, shares food, and spends the day together celebrating. It feels very special."

for i in range(1, total + 1):
    while True:
        os.system('cls' if os.name == 'nt' else 'clear')

        print("\t\t\t<<<<<< Turing Test >>>>>>\n\n\n")
        print(f"\t\t\t\tQuestion --> {i}\n\n")
        print(question[i] + "\n\n\n")
        print("\t\t\t\t   Answer\n\n")
        print(answer[i] + "\n\n\n\n\n")
        print("------------------------------------------------------")
        print("If you think the answer is given by a human    Enter 1\n")
        print("If you think the answer is given by an Ai      Enter 0\n\n\n")

        try:
            choice = int(input("Enter Your Choice: "))
        except:
            choice = -1

        if choice == 1:
            if human[i] == 0:
                actually_ai_but_user_answerd_human += 1
            break
        elif choice == 0:
            if ai[i] == 0:
                actually_human_but_user_answerd_ai += 1
            break
        else:
            print("Wrong Key Was Pressed")
            input()

    print("\n\n")
    input("Press Any Key To Continue...")

os.system('cls' if os.name == 'nt' else 'clear')

print("\t\t\t\tTuring Test Result\n\n\n\n")
print(f"Actually answered by Ai but user thought it was Human: {actually_ai_but_user_answerd_human}\n\n\n")
print(f"Actually answered by Human but user thought it was Ai: {actually_human_but_user_answerd_ai}\n\n\n\n")
