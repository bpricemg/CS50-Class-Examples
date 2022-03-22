# Recognize a greeting

import re
import speech_recognition
import pyttsx3

# Obtain audio from the microphone
recognizer = speech_recognition.Recognizer()
with speech_recognition.Microphone() as source:
    print("Say something: ")
    audio = recognizer.listen(source)

# Recognize speech using Google Speech Recognition
words = recognizer.recognize_google(audio)

# Respond to speech
engine = pyttsx3.init()
matches = re.search("my name is (.*)", words)
if matches:
    engine.say(f"Hey, {matches[1]}.")
    engine.runAndWait()
else:
    print("Hey, you")
