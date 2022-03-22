# Generate a QR code

import os
import qrcode

# Generate QR code
img = qrcode.make("https://youtu.be/oHg5SJYRHA0")

#Save as file
img.save("qr.png", "PNG")

# Open file
os.system("qr.png")
