import json

with open('database.json','r') as file:
    Database = json.load(file)

while True:
    keyword = input('Add New Keywords Or Press 0 To Exit: ')
    if keyword == "0":
        break
    else:
        value = input('Value: ')
    
    new_neuron = {
        "Keyword": keyword,
        "Value": value
    }

    Database["Neuron"].append(new_neuron)

with open('database.json','w') as file:
    json.dump(Database,file,indent=4)

print("New Entries Added Successfully")