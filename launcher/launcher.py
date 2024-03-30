import tkinter as tk


def move_circle(event):
    # Move the circle to the mouse cursor position
    canvas.coords(circle, event.x - 25, event.y - 25, event.x + 25, event.y + 25)


def change_color():
    # Change the color of the circle
    canvas.itemconfig(circle, fill="red")


root = tk.Tk()
root.title("Dynamic Geometry")

canvas = tk.Canvas(root, width=400, height=400, bg="white")
canvas.pack()

# Create a circle on the canvas
circle = canvas.create_oval(175, 175, 225, 225, fill="blue")

# Bind mouse motion to move the circle
canvas.bind("<Motion>", move_circle)

# Create a button to change the color of the circle
color_button = tk.Button(root, text="Change Color", command=change_color)
color_button.pack()

root.mainloop()
