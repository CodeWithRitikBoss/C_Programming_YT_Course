import tkinter as tk
from tkinter import ttk
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import matplotlib.pyplot as plt

# Function to create a sample plot
def create_plot():
    figure, ax = plt.subplots(figsize=(5, 4))
    ax.plot([1, 2, 3, 4, 5], [1, 4, 2, 3, 5], marker='o')
    ax.set_title("Sample Data")
    return figure

# Function to handle button click event
def on_button_click():
    label.config(text="Button clicked!")

# Create the main window
root = tk.Tk()
root.title("Dashboard")
root.geometry("800x600")

# Create a frame for the plot
plot_frame = ttk.Frame(root)
plot_frame.pack(side=tk.TOP, fill=tk.BOTH, expand=True)

# Create the plot and embed it into the Tkinter window
fig = create_plot()
canvas = FigureCanvasTkAgg(fig, master=plot_frame)
canvas.draw()
canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=True)

# Create a frame for controls
control_frame = ttk.Frame(root)
control_frame.pack(side=tk.BOTTOM, fill=tk.X)

# Create a label and button
label = ttk.Label(control_frame, text="Welcome to the Dashboard")
label.pack(pady=10)

button = ttk.Button(control_frame, text="Click Me", command=on_button_click)
button.pack(pady=5)

# Start the Tkinter event loop
root.mainloop()
