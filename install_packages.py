import json
import importlib.resources
import subprocess
import sys
import pip


def install_packages(requirement_list):
    for requirement in requirement_list:
        try:
            subprocess.check_call([sys.executable, "-m", "pip", "install", requirement])
        except Exception as e:
            print("Requirement could not be found:", requirement)
            # print(e)

requirement_list = []
with open("data.json", "r") as file:
    data = json.load(file)

for val in data["Dependencies"]:
    for i in val:
        item = i+"=="+val[i]
        requirement_list.append(item)


install_packages(requirement_list)
