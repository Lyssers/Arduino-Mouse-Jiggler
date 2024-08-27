# Arduino Leonardo Mouse Jiggler

Does what it says on the tin! Upload to an Arduino Leonardo (or compatible) board, plug into the target machine, and it will make a tiny mouse movement and click the mouse approximately every 5 minutes, which should be enough to remain active in an application that checks for inactivity and bases status based on that, such as for example, Slack.

Feel free to adjust the delay!

I am not responsible if this gets you fired for any reason, including due to some clever EDR checking for "Arduino" strings in kernel logs as the USB device connects, or finding out in some clever way I can't think of! Even if you change the board string descriptors, VID and PID in boards.txt to correspond to a Logitech mouse you found on devicehunt. So use this at your own risk! Kthx
