import pyautogui
# pyautogui.write('I Love you python', interval=0.25)
# pyautogui.press('space')
# pyautogui.press('enter')
def pattern_print(num):
    for i in range(1, num + 1):
        pyautogui.write('#' * i)
        pyautogui.press('enter')

pattern_print(5)