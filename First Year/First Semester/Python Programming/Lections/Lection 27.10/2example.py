import tkinter as tk
# interface

def BGNtoEUR(bgn):
    return round(bgn/1.95583,2)
def clear(event):
    outputText.config(state="normal")
    outputText.delete(0,tk.END)
    outputText.config(state="readonly")

def BGNtoEURGUI():
    value = float(input(inputText.get()))
    outputText.config(state="normal")
    outputText.delete(0,tk.END)
    outputText.insert(0,str(round(value/1.95583,2)))
    outputText.config(state="readonly")
    inputText.select_range(0,tk.END)
    inputText.focus()

if __name__ == "__main__":
    inputValue = 100
    print("%g"%BGNtoEUR(inputValue)) # generalpurposeformat - nai-dobriqt vid
    print("%f"%BGNtoEUR(104)) # do 6 znaka sled desetichna zapetaq
    print("%d"%BGNtoEUR(104)) # cqlo chislo
    print(f'100 BGN = {BGNtoEUR(100)} EUR')
    print(f'100 BGN = {BGNtoEUR(100)} \N{EURO SIGN}') # \N pechata znak
    window = tk.Tk()
    window.title("BGN to EUR")
    window.minsize(400,100)
    window.resizable(False,False)
    inputLabel = tk.Label(window, text="BGN=")
    inputLabel.grid(row=0,column=0,padx=10, pady=10)
    inputText = tk.Entry()
    inputText.grid(row=0,column=1,padx=10, pady=10)
    inputText.bind("<Return>",
                   lambda event: convert.invoke())
    inputText.bind("<Key>", clear)
    inputText.focus()
    convert = tk.Button(window, text="Convert",command=BGNtoEURGUI)
    convert.grid(row=0,column=2,padx=10, pady=10)
    outputLabel = tk.Label(text="EUR")
    outputLabel.grid(row=1,column=0,padx=10, pady=10)
    outputText = tk.Entry(state="readonly")
    outputText.grid(row=1,column=1,padx=10, pady=10)
    window.mainloop()
