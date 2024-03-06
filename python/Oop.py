class Chatbot:

    def __init__(self, name, model="GPT-4"):
        self.name = name
        self.model = model

    def chat(self, message):
        return f"your message is {message}"

    # Setter
    def set_name(self, new_name):
        self.name = new_name

    # Getter
    def get_name(self):
        return self.name

    def get_bot(self):
        return self.model


first = Chatbot("DSA EXPERT", "GPT-3.5")
first.set_name("DSA")
print(first.get_name())

print(first.get_bot())
