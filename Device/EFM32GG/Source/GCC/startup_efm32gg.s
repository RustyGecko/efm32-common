# 1 "/home/sondre/bin/SimplicityStudio_v2/developer/sdks/efm32/v2//Device/SiliconLabs/EFM32GG/Source/GCC/startup_efm32gg.S"
# 1 "<command-line>"
# 1 "/home/sondre/bin/SimplicityStudio_v2/developer/sdks/efm32/v2//Device/SiliconLabs/EFM32GG/Source/GCC/startup_efm32gg.S"
# 32 "/home/sondre/bin/SimplicityStudio_v2/developer/sdks/efm32/v2//Device/SiliconLabs/EFM32GG/Source/GCC/startup_efm32gg.S"
    .syntax unified
    .arch armv7-m

    .section .stack
    .align 3



    .equ Stack_Size, 0x400

    .globl __StackTop
    .globl __StackLimit
__StackLimit:
    .space Stack_Size
    .size __StackLimit, . - __StackLimit
__StackTop:
    .size __StackTop, . - __StackTop

    .section .heap
    .align 3



    .equ Heap_Size, 0xC00

    .globl __HeapBase
    .globl __HeapLimit
__HeapBase:
    .if Heap_Size
    .space Heap_Size
    .endif
    .size __HeapBase, . - __HeapBase
__HeapLimit:
    .size __HeapLimit, . - __HeapLimit

    .section .isr_vector
    .align 8
    .globl __isr_vector
__isr_vector:
    .long __StackTop
    .long Reset_Handler
    .long NMI_Handler
    .long HardFault_Handler
    .long MemManage_Handler
    .long BusFault_Handler
    .long UsageFault_Handler
    .long Default_Handler
    .long Default_Handler
    .long Default_Handler
    .long Default_Handler
    .long SVC_Handler
    .long DebugMon_Handler
    .long Default_Handler
    .long PendSV_Handler
    .long SysTick_Handler


    .long DMA_IRQHandler
    .long GPIO_EVEN_IRQHandler
    .long TIMER0_IRQHandler
    .long USART0_RX_IRQHandler
    .long USART0_TX_IRQHandler
    .long USB_IRQHandler
    .long ACMP0_IRQHandler
    .long ADC0_IRQHandler
    .long DAC0_IRQHandler
    .long I2C0_IRQHandler
    .long I2C1_IRQHandler
    .long GPIO_ODD_IRQHandler
    .long TIMER1_IRQHandler
    .long TIMER2_IRQHandler
    .long TIMER3_IRQHandler
    .long USART1_RX_IRQHandler
    .long USART1_TX_IRQHandler
    .long LESENSE_IRQHandler
    .long USART2_RX_IRQHandler
    .long USART2_TX_IRQHandler
    .long UART0_RX_IRQHandler
    .long UART0_TX_IRQHandler
    .long UART1_RX_IRQHandler
    .long UART1_TX_IRQHandler
    .long LEUART0_IRQHandler
    .long LEUART1_IRQHandler
    .long LETIMER0_IRQHandler
    .long PCNT0_IRQHandler
    .long PCNT1_IRQHandler
    .long PCNT2_IRQHandler
    .long RTC_IRQHandler
    .long BURTC_IRQHandler
    .long CMU_IRQHandler
    .long VCMP_IRQHandler
    .long LCD_IRQHandler
    .long MSC_IRQHandler
    .long AES_IRQHandler
    .long EBI_IRQHandler
    .long EMU_IRQHandler


    .size __isr_vector, . - __isr_vector

    .text
    .thumb
    .thumb_func
    .align 2
    .globl Reset_Handler
    .type Reset_Handler, %function
Reset_Handler:







    ldr r0, =SystemInit
    blx r0

    ldr r1, =__etext
    ldr r2, =__data_start__
    ldr r3, =__data_end__

    subs r3, r2
    ble .flash_to_ram_loop_end
.flash_to_ram_loop:
    subs r3, #4
    ldr r0, [r1, r3]
    str r0, [r2, r3]
    bgt .flash_to_ram_loop
.flash_to_ram_loop_end:

    ldr r0, =main
    bx r0
    .pool
    .size Reset_Handler, . - Reset_Handler




    .macro def_irq_handler handler_name
    .align 1
    .thumb_func
    .weak \handler_name
    .type \handler_name, %function
\handler_name:
    b .
    .size \handler_name, . - \handler_name
    .endm

    def_irq_handler Default_Handler

    def_irq_handler NMI_Handler
    def_irq_handler HardFault_Handler
    def_irq_handler MemManage_Handler
    def_irq_handler BusFault_Handler
    def_irq_handler UsageFault_Handler
    def_irq_handler SVC_Handler
    def_irq_handler DebugMon_Handler
    def_irq_handler PendSV_Handler
    def_irq_handler SysTick_Handler

    def_irq_handler DMA_IRQHandler
    def_irq_handler GPIO_EVEN_IRQHandler
    def_irq_handler TIMER0_IRQHandler
    def_irq_handler USART0_RX_IRQHandler
    def_irq_handler USART0_TX_IRQHandler
    def_irq_handler USB_IRQHandler
    def_irq_handler ACMP0_IRQHandler
    def_irq_handler ADC0_IRQHandler
    def_irq_handler DAC0_IRQHandler
    def_irq_handler I2C0_IRQHandler
    def_irq_handler I2C1_IRQHandler
    def_irq_handler GPIO_ODD_IRQHandler
    def_irq_handler TIMER1_IRQHandler
    def_irq_handler TIMER2_IRQHandler
    def_irq_handler TIMER3_IRQHandler
    def_irq_handler USART1_RX_IRQHandler
    def_irq_handler USART1_TX_IRQHandler
    def_irq_handler LESENSE_IRQHandler
    def_irq_handler USART2_RX_IRQHandler
    def_irq_handler USART2_TX_IRQHandler
    def_irq_handler UART0_RX_IRQHandler
    def_irq_handler UART0_TX_IRQHandler
    def_irq_handler UART1_RX_IRQHandler
    def_irq_handler UART1_TX_IRQHandler
    def_irq_handler LEUART0_IRQHandler
    def_irq_handler LEUART1_IRQHandler
    def_irq_handler LETIMER0_IRQHandler
    def_irq_handler PCNT0_IRQHandler
    def_irq_handler PCNT1_IRQHandler
    def_irq_handler PCNT2_IRQHandler
    def_irq_handler RTC_IRQHandler
    def_irq_handler BURTC_IRQHandler
    def_irq_handler CMU_IRQHandler
    def_irq_handler VCMP_IRQHandler
    def_irq_handler LCD_IRQHandler
    def_irq_handler MSC_IRQHandler
    def_irq_handler AES_IRQHandler
    def_irq_handler EBI_IRQHandler
    def_irq_handler EMU_IRQHandler


    .end
