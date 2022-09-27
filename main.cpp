#include "mbed.h"
#include <stdio.h>
#include <stdlib.h>
#include "el_binaryutils.h"
#include "MemoryPool.h"
#include "USBSerial.h"

#define dirled (uint32_t*) 0x50000514
#define setled (uint32_t*) 0x50000508
#define clearled (uint32_t*) 0x5000050C

/*
//Allow to connect to TeraTerm
USBSerial sendmessage;

typedef struct{
      uint32_t newmessage;
} message_t;

enum newmessage{item1, item2, item3, item4, item5, item6, item7, item8, item9};

MemoryPool<message_t, 9> mpool;
Queue<message_t, 9> queue;

Thread Producer;
Thread Consumer;


void neapolitan(void){
    while(true) {
        sendmessage.printf("Initialization complete!\r\n");
        message_t *message = mpool.alloc();

        //item 1 
        message -> newmessage = item1;
        queue.put(message);
        thread_sleep_for(500);
        //item 2
        message -> newmessage = item2;
        queue.put(message);
        thread_sleep_for(500);
        //item 3
        message -> newmessage = item3;
        queue.put(message);
        thread_sleep_for(500);
        //item 4
        message -> newmessage = item4;
        queue.put(message);
        thread_sleep_for(500);
        //item 5
        message -> newmessage = item5;
        queue.put(message);
        thread_sleep_for(500);
        //item 6
        message -> newmessage = item6;
        queue.put(message);
        thread_sleep_for(500);
        //item 7
        message -> newmessage = item7;
        queue.put(message);
        thread_sleep_for(500);
        //item 8
        message -> newmessage = item8;
        queue.put(message);
        thread_sleep_for(500);
        //item 9
        message -> newmessage = item9;
        queue.put(message);
        thread_sleep_for(500);
    }   
}


void vanilla(void){
    uint32_t sleeper = 0;

    while(true) {
        osEvent evt = queue.get(0);
        if(evt.status == osEventMessage){
            message_t *message = (message_t *)evt.value.p;
            if (message-> newmessage == item1){
                //send message to USB
                sendmessage.printf("Item 1.\r\n");
                //Turn on LED
                setbit(setled, 2);
                thread_sleep_for(sleeper);
                setbit(clearled, 22);
                thread_sleep_for(sleeper); 
            }
            else if(message-> newmessage == item2){
                //send message to USB
                sendmessage.printf("Item 2.\r\n");
                //Turn on LED
                setbit(setled, 16);
                thread_sleep_for(sleeper);
                setbit(clearled, 16);
                thread_sleep_for(sleeper);
            }
            else if(message-> newmessage == item3){
                //send message to USB
                sendmessage.printf("Item 3.\r\n");
                //Turn on LED
                setbit(setled, 16);
                thread_sleep_for(sleeper);
                setbit(clearled, 16);
                thread_sleep_for(sleeper);
            }
            else if(message-> newmessage == item4){
                //send message to USB
                sendmessage.printf("Item 4.\r\n");
                //Turn on LED
                setbit(setled, 16);
                thread_sleep_for(sleeper);
                setbit(clearled, 16);
                thread_sleep_for(sleeper);
            }
            else if(message-> newmessage == item5){
                //send message to USB
                sendmessage.printf("Item 5.\r\n");
                //Turn on LED
                setbit(setled, 16);
                thread_sleep_for(sleeper);
                setbit(clearled, 16);
                thread_sleep_for(sleeper);
            }
            else if(message-> newmessage == item6){
                //send message to USB
                sendmessage.printf("Item 6.\r\n");
                //Turn on LED
                setbit(setled, 16);
                thread_sleep_for(sleeper);
                setbit(clearled, 16);
                thread_sleep_for(sleeper);
            }
            else if(message-> newmessage == item7){
                //send message to USB
                sendmessage.printf("Item 7.\r\n");
                //Turn on LED
                setbit(setled, 16);
                thread_sleep_for(sleeper);
                setbit(clearled, 16);
                thread_sleep_for(sleeper);
            }
            else if(message-> newmessage == item8){
                //send message to USB
                sendmessage.printf("Item 8.\r\n");
                //Turn on LED
                setbit(setled, 16);
                thread_sleep_for(sleeper);
                setbit(clearled, 16);
                thread_sleep_for(sleeper);
            }
            else if(message-> newmessage == item9){
                //send message to USB
                sendmessage.printf("Item 9.\r\n");
                //Turn on LED
                setbit(setled, 16);
                thread_sleep_for(sleeper);
                setbit(clearled, 16);
                thread_sleep_for(sleeper);
            }
        mpool.free(message);  
        }
    }
}

void strawberry(void){

}

void chocolate(void){

}
*/

// main() runs in its own thread in the OS
int main(){
       // Producer.start(neapolitan);
        //Consumer.start(vanilla);
        setbit(dirled, 13);
    while (true) {
        setbit(setled, 13);
        thread_sleep_for(12);
        setbit(clearled, 13);
        thread_sleep_for(12); 
    }
}
