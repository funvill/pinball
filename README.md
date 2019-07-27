# Pinball table 



## FAST Pinball

[MPF Tutorial](http://docs.missionpinball.org/en/latest/tutorial/index.html)

### FAST Pinball boards 

- [FAST Nano Controller](http://fastpinball.com/platform/hardware/controllers/fast-nano-controller) - The FAST Nano Controller has 2 dedicated ARM processors. The first processor is used to control the network of FAST I/O boards used to read switches, fire coils and much more. The second processor controls 256 individual RGB LEDs. A controlling PC connects to the FAST Nano Controller using a micro-USB cable. The controlling PC communicates with each ARM processor by making a Virtual COM port connection and using our FAST Pin Protocol over RS232.
- [FAST I/O 0804](http://fastpinball.com/platform/hardware/io/fast-io-0804)
- [FAST I/O 3208](http://fastpinball.com/platform/hardware/io/fast-io-3208)


## Pinball paddle 

[PinballPaddle](https://github.com/funvill/PinballPaddle)

## ToDo: 

- Get NTA156 connectors for the power supplies of the boards. We need a 2x 7 pin, and 1x 12 pin connectors. 
- Think up a better name then "pinball" 

## Notes:

- The *FAST Nano Controller* board 
  - Requires 12V 5V external power J7 conector. Can not be powered by USB.  
  - When connected to a PC via USB, 4x serial ports will be created. Only use the first two. 

