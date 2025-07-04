A Soft-Robotic Auto-Tuner for String Instruments

This project presents the design and prototyping of a universal robotic tuning device capable of automatically adjusting the pitch of various string instruments. By integrating a soft robotic gripper, a flexible transmission mechanism, and a pitch detection module based on microphone input, the system can adapt to different tuning pegs and provide real-time automatic tuning. 

Sensor part

1.Testing of piezo sensor

The piezo sensor can sometimes detect the string's frequnency when you put the whole sensor below string('Sometimes' means it always goes wrong).But if you stick the sensor on the sound box of the instrument(We use ukelele during the test).You will found it can't receive the shake of the string at all.It is not snesitive enough to detect the right pitch of the sound at all.So the test result is we can not use piezo sensor.
![image](https://github.com/user-attachments/assets/18e72d16-f91a-46f8-a118-5330d20ef8e4)![image](https://github.com/user-attachments/assets/6fe3cf20-fd9f-4862-8bae-d470ada2078f)

You can find that the detection result is not accurate and sensitive.

2.Testing of microphone (MAX9814)

We are testing the microphone(MAX9814)now.
