import tkinter as tk
from tkinter import messagebox

class StudentRecord:
    def __init__(self, root):
        self.root = root
        self.root.title("Student Record Management")
        self.root.geometry("500x400")

        self.name_var = tk.StringVar()
        self.roll_no_var = tk.StringVar()
        self.course_var = tk.StringVar()

        tk.Label(self.root, text="Name").grid(row=0, column=0, pady=10)
        tk.Entry(self.root, textvariable=self.name_var).grid(row=0, column=1, pady=10)

        tk.Label(self.root, text="Roll No").grid(row=1, column=0, pady=10)
        tk.Entry(self.root, textvariable=self.roll_no_var).grid(row=1, column=1, pady=10)

        tk.Label(self.root, text="Course").grid(row=2, column=0, pady=10)
        tk.Entry(self.root, textvariable=self.course_var).grid(row=2, column=1, pady=10)

        tk.Button(self.root, text="Add Record", command=self.add_record).grid(row=3, column=0, pady=10)
        tk.Button(self.root, text="View Records", command=self.view_records).grid(row=3, column=1, pady=10)

        self.records = []

    def add_record(self):
        if not self.name_var.get() or not self.roll_no_var.get() or not self.course_var.get():
            messagebox.showerror("Error", "All fields are required")
            return
        
        self.records.append({
            "Name": self.name_var.get(),
            "Roll No": self.roll_no_var.get(),
            "Course": self.course_var.get()
        })
        messagebox.showinfo("Success", "Record added successfully")
        self.clear_fields()

    def view_records(self):
        records_window = tk.Toplevel(self.root)
        records_window.title("View Records")
        records_window.geometry("400x300")

        for idx, record in enumerate(self.records):
            tk.Label(records_window, text=f"Record {idx+1}").grid(row=idx, column=0)
            tk.Label(records_window, text=record["Name"]).grid(row=idx, column=1)
            tk.Label(records_window, text=record["Roll No"]).grid(row=idx, column=2)
            tk.Label(records_window, text=record["Course"]).grid(row=idx, column=3)
            
    def clear_fields(self):
        self.name_var.set("")
        self.roll_no_var.set("")
        self.course_var.set("")

root = tk.Tk()
app = StudentRecord(root)
root.mainloop()
