# pip install pyperclip

import re, pyperclip

def get_underscore_title(title: str):
    underscore_title = re.sub(r'[^0-9a-zA-Z]+', '_', title)
    return underscore_title

if __name__ == "__main__":
    title = input("Title: ")
    underscore_title = get_underscore_title(title)
    print(underscore_title)
    pyperclip.copy(underscore_title)
