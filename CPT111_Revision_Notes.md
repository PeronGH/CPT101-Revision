# CPT101 Revision

## Lecture 1

### Types of Computers

* Mainframe computers: Large computers that were popular in the <u>1960s</u>
* Super computers: Very powerful computers that were developed in the <u>1970s</u>
* Workstations: Smaller computers that were designed for specific tasks (e.g. graphic design, chip design) and could be placed on a desktop. These computers were cheaper than mainframe and super computers.
* Microcomputers: Computers that were used by engineers
* Personal computers: Computers that were marketed for personal use
* Microcontrollers: Small computers that were used in specialized applications such as calculators and automobiles
* Servers: Computers that were used to manage networking, web, and cloud services, allowing users to share resources and storage and access applications over a network
* Trend: There has been a trend towards increasing the performance and decreasing the size of computers over time
* Future: It is possible that in the future, brain-computer interfaces (BCIs) will be developed, allowing people to interact with computers using their thoughts.

### Computer Generations

1. The first generation of computers (1940-1956) used vacuum tubes and were the first electronic computers. They were large, expensive, and consumed a lot of electricity. Some examples of first-generation computers include the ENIAC and UNIVAC.
2. The second generation of computers (1956-1963) used transistors, which were smaller and more reliable than vacuum tubes. They were also faster and more energy efficient than first-generation computers. Some examples of second-generation computers include the IBM 1401 and the DEC PDP-1.
3. The third generation of computers (1964-1971) used integrated circuits (ICs) instead of transistors. ICs are small electronic devices that contain transistors and other components on a single chip of silicon. Third-generation computers were much smaller and more powerful than their predecessors. Some examples of third-generation computers include the IBM System/360 and the DEC PDP-8.
4. The fourth generation of computers (1971-present) used microprocessors, which are ICs that contain the processing unit of a computer. Microprocessors made it possible to create compact, powerful computers that could be used for a wide variety of applications. Some examples of fourth-generation computers include the IBM PC and the Apple Macintosh.

### Consequences of Ignoring Hardware Details

* Unsuitable equipment are ordered for programmers
* Unsuitable software fails to exploit the performance advantages offered by revolutionary new circuits. 

### Categories of Computer Hardware

* Input devices: These are devices that allow you to enter data into a computer, such as a keyboard, mouse, touchpad, scanner, and microphone.
* Processing: This refers to the central processing unit (CPU) and arithmetic logic unit (ALU) of a computer, which are responsible for executing instructions and performing calculations.
* Output devices: These are devices that allow you to view or print the results of a computer's processing, such as a monitor, printer, and speakers.
* Storage: This refers to devices that allow you to save data for later use, such as hard drives, solid state drives, and optical drives.
* Communication: These are devices that allow a computer to connect to other devices or networks, such as networking chips, modems, and Bluetooth adapters.

### Computer Software

#### System Software

* Communication with hardware
* Resource management
* Facilitates communication among application programs

#### Application Software

* Benefits/assists the user

### Backward Compatibility

Backward compatibility, also known as downward compatibility, refers to the ability of newer hardware or software to work with older hardware or software. This is important because it allows users to continue using their existing equipment and software when they upgrade to newer technology.

### VHDL

* VHDL (VHSIC Hardware Description Language) is a programming language used to describe the behavior of electronic circuits.
* It is commonly used to design and document digital logic circuits, such as those found in computers and other electronic devices.
* VHDL is a hardware description language, meaning that it is used to describe the behavior of a circuit at a high level, rather than specifying the exact steps that the circuit should take to perform a particular task.
* VHDL can be used to simulate the behavior of a circuit before it is actually built, allowing designers to test and debug their designs before committing to expensive fabrication processes.
* VHDL is used in a wide range of applications, including the design of CPUs, memory systems, and other complex digital circuits.

### Computer Systems Hierarchy

1. Hardware: This is the physical equipment that makes up a computer system, including the processor, memory, storage devices, input/output devices, and other components.

2. Operating system: This is a collection of software that manages the hardware resources of a computer and provides a platform for other programs to run on. Examples of operating systems include Windows, macOS, and Linux.

   * The kernel is a central part of the operating system that manages the resources of the computer, including the CPU, memory, and input/output devices.

   * The kernel is responsible for scheduling tasks for the CPU to execute, ensuring that they are run in a fair and efficient manner.

   * The kernel also provides security, protecting the system and its resources from unauthorized access or tampering.

3. Application software: This is software that is designed to perform specific tasks, such as word processing, spreadsheet creation, web browsing, and so on.

   * A program must be supported by the operating system in order to run on a computer.

   * The program can access the resources of the operating system through the application programming interface (API).

#### Benefits

* Modularity: A hierarchical system is divided into smaller, modular components, which makes it easier to understand and modify.
* Reusability: Components at higher levels of the hierarchy can be reused in different contexts, which can save time and effort.
* Extensibility: New components can be added at any level of the hierarchy, which allows the system to evolve and adapt to changing needs.
* Scalability: A hierarchical system can be easily scaled up or down, depending on the needs of the system.
* Flexibility: A hierarchical system is flexible, as it allows different components to be swapped in and out or modified as needed.
* Robustness: A hierarchical system is more resistant to failure, as the failure of one component does not necessarily affect the entire system.

### Advantages of OS

* Easier to use: An operating system provides a user-friendly interface that makes it easier for users to interact with the computer and perform tasks.
* Easier programming: An operating system provides a platform for developers to create programs that can run on the computer. The operating system handles many of the low-level details of programming, allowing developers to focus on creating applications that meet the needs of users.
* Protect system resources: An operating system helps to protect system resources, such as memory and input/output devices, from unauthorized access or tampering. This is important because it helps to ensure that no single process or user can negatively impact the performance of the system.
* Fair and efficient distribution of system resources: An operating system is responsible for scheduling tasks and managing the allocation of resources, such as the CPU and memory, to ensure that all programs and processes are run in a fair and efficient manner.

### Moore's Law

A prediction made by Gordon Moore, co-founder of Intel, in 1965 that the number of transistors on a computer chip would double approximately every two years.

### Interaction Between Hardware and Software

* WIMP: WIMP stands for "windows, icons, menus, pointer." It refers to the GUI of many modern operating systems, which is based on the use of windows, icons, menus, and a pointer (such as a mouse cursor) to interact with the system.
* Internet: The internet is a global network of computers that allows users to communicate and share information. It is made up of hardware (such as servers and routers) and software (such as web browsers and servers). The interaction between hardware and software is crucial to the operation of the internet, as it enables users to access and share information through their computers and other devices.

### Trends of Computing

* Scientific computing (computation): This refers to the use of computers to model and simulate scientific phenomena, such as weather patterns and the behavior of molecules.
* Business computing (data): This refers to the use of computers to automate and support business processes, such as accounting, payroll, and customer relationship management.
* Personal computing (interaction): This refers to the development of personal computers, which are small, affordable, and easy to use, making them accessible to individuals and households.
* Pervasive computing (ubiquity): This refers to the integration of computing technology into everyday objects and environments, such as smart homes and wearable devices.
* Mobile computing (mobility): This refers to the development of portable computing devices, such as laptops and smartphones, that allow users to access information and communicate from anywhere.

## Lecture 2

### Input-Process-Output-Model

1. Input: This is the raw data that is entered into the system. The input can come from a variety of sources, such as a keyboard, a mouse, a scanner, or a network connection.
2. Process: This is the stage in which the system processes the input data. This may involve performing calculations, sorting data, or searching for specific information.
3. Output: This is the result of the processing stage. The output can be in the form of a report, a graph, a message, or some other form of information.

This was an essential scheme of the von Neumann model which is more detailed.

### Components of the Computer System

Both the input-process-output (IPO) model and the von Neumann model describe the components and functions of a computer system. To implement these models, three main components are required: hardware, software, and data.

1. Hardware: This refers to the physical components of a computer system, such as the processor, memory, storage devices, input/output devices, and other peripherals. The hardware is responsible for carrying out the instructions of the software and processing the data.
2. Software: This refers to the programs and instructions that run on a computer. Software can include operating systems, application programs, and utilities that perform specific tasks.
3. Data: This refers to the raw material that is processed by a computer, such as text documents, images, and numbers. Data is input into the system, processed by the hardware and software, and then output in a useful form.

### Hardware

Here is a brief overview of some common hardware components:

* CPU (central processing unit): The CPU is the "brain" of the computer, and it is responsible for executing instructions and performing calculations.
* Main memory: Main memory, also known as RAM (random access memory), is used to store instructions and data that are being used or processed by the CPU.
* Secondary storage: Secondary storage, such as a hard drive or solid-state drive, is used to store data and programs permanently, even when the power is turned off.
* Input devices: Input devices, such as a keyboard or mouse, allow users to input data and instructions into the system.
* Output devices: Output devices, such as a monitor or printer, allow the system to produce information in a useful form.

### Software

* The hardware of a computer (e.g. CPU) can carry out only very simple operations like adding numbers (very quickly)
* To make it perform useful tasks, these simple steps are combined in the form of programs, which are collectively known as software.

### Machine Instructions

* The CPU of a computer performs the execution of machine instructions, which are also known as machine code or assembly language.
* Every CPU has its own instruction set, which is a set of predefined instructions that it is capable of executing.
* The instruction set of a CPU typically consists of a few hundred basic instructions, such as add, subtract, load, store, and branch.
* There is no standard instruction set that is used by all CPUs. Each CPU manufacturer designs its own instruction set.
* Software developers must write code that is specific to the instruction set of a particular CPU.
* Machine instructions are a fundamental part of how a computer system works, as they provide the basic instructions that are executed by the CPU to perform useful tasks.

### Categories of Machine Instructions

* Input/output: These instructions are used to transfer data between the CPU and input/output devices, such as keyboards, mice, and printers. Examples of input/output instructions include IN and OUT (on the Intel x86 and Pentium CPUs).
* Data transfer and manipulation: These instructions are used to move data between memory and registers, perform arithmetic and logical operations on data, and perform other data manipulations. Examples of data transfer and manipulation instructions include MOV, ADD, MUL, AND, and OR.
* Transfer of program control: These instructions are used to transfer control of the program execution to a different point in the program, based on certain conditions. Examples of transfer of program control instructions include JMP (jump) and JC (jump if carry).
* Machine control: These instructions are used to control the operation of the CPU and other hardware components. They can be used to halt processing, reset the hardware, or generate interrupts. Examples of machine control instructions include INT (interrupt) and HLT (halt).

### Comparison of Machine Instructions and HLLs

* Machine instructions: Machine instructions are the lowest-level programming language that is used to write programs for a computer. They consist of a set of predefined instructions that are specific to a particular type of CPU and are used to perform basic operations such as arithmetic and data manipulation. Machine instructions are typically written in assembly language, which is a symbolic representation of the machine instructions.
* High-level programming languages (HLLs): HLLs are programming languages that are designed to be more abstract and easier to use than machine instructions. They use natural language-like constructs and are designed to be more human-readable. Examples of HLLs include C, C++, Java, and Python.
* Comparison: One major difference between machine instructions and HLLs is the level of abstraction. Machine instructions are very low-level and are specific to a particular type of CPU, while HLLs are higher-level and are designed to be more user-friendly. As a result, HLLs are generally more suitable for programming than machine instructions. However, the programs written in HLLs still have to be translated into machine code (a sequence of machine instructions) in order to be executed by a computer.

### Von Neumann

John von Neumann was an Austria-Hungary-born American mathematician who made significant contributions to a wide range of fields, including quantum physics, functional analysis, set theory, topology, economics, computer science, numerical analysis, and hydrodynamics.

### Von Neumann Model

* The von Neumann model is a theoretical model of a computer that describes the structure and organization of a computer system.
* It was introduced by John von Neumann, a Hungarian-American mathematician and computer scientist, in the late 1940s.
* It consists of a processing unit, a memory unit, an input/output (I/O) unit.
* A program is a set of instructions that tell the computer what to do. It is stored in the memory unit and represented by binary codes.
* The memory unit is rewritable, meaning that it can store and retrieve data and instructions, and it can also be erased and rewritten with new data and instructions.
* A process is an active part of the machine that executes the instructions in a program.
* The von Neumann model is a general-purpose model, meaning that it can be used to build a wide variety of computer systems. It has had a significant influence on the design of computer systems and is still in use today.

#### How to Be 'General-Purpose'?

The von Neumann model uses a rewritable memory, which means that the instructions and data in memory can be erased and rewritten with new information. This allows the computer to change its behavior and perform different tasks simply by loading new instructions into memory.

#### Von Neumann Bottleneck

* The Von Neumann bottleneck refers to the limiting effect that the speed of memory access can have on the performance of a computer system.
* It occurs when the CPU is faster than the memory, which means that the CPU is frequently waiting for data and instructions to be transferred to or from memory.

#### Potential Problems

1. Different data types: In many computer systems, different data types (e.g. integers, floating point numbers, characters, etc.) are represented by different binary codes. If the computer does not know the data type of a particular piece of data, it may treat it as an instruction instead, which can lead to errors.
2. Overlapping instruction and data ranges: In some cases, the range of binary codes that are used to represent instructions may overlap with the range of binary codes that are used to represent data. For example, a 16-bit instruction code could, in different circumstances, represent a number or two characters. If the computer does not know the context in which the code is being used, it may treat it as an instruction or as data, which can also lead to errors.

#### Solutions

* Use a higher-bandwidth memory system, such as cache memory, which is located closer to the CPU and can be accessed more quickly
* Use multiple CPU cores or multiple processors, which can allow the computer to perform multiple tasks concurrently and reduce the impact of the bottleneck
* Use specialized hardware, such as graphics processing units (GPUs) or field-programmable gate arrays (FPGAs), which can be more efficient at executing certain types of instructions
* Use more efficient algorithms and data structures, which can reduce the number of memory accesses required to perform a given task
* Use software optimization techniques, such as vectorization, which can take advantage of the capabilities of modern CPUs to improve performance
* Use techniques such as memory prefetching, which can anticipate the memory access patterns of a program and prefetch data from main memory into cache before it is needed by the CPU.

#### Famous People

<u>John von Neumann</u> was a Hungarian-American mathematician and computer scientist who is credited with the development of the Von Neumann model of a computer, which is the basis for the design of most modern computers. Some key points about von Neumann include:

* He was born in 1903 in Hungary and received his Ph.D. in mathematics from the University of Budapest in 1926.
* He made significant contributions to a wide range of fields, including mathematics, physics, economics, and computer science.
* In the 1940s, he worked on the development of the first electronic digital computers, including the Electronic Numerical Integrator And Computer (ENIAC) at the University of Pennsylvania.
* He proposed the Von Neumann model of a computer, which describes the structure and relationships between the various components of a computer system, including the memory, CPU, I/O devices, and bus.

<u>Konrad Zuse</u> was a German engineer and computer pioneer who is credited with building the first program-controlled computer. Some key points about Zuse include:

* He was born in 1910 in Berlin, Germany, and received his degree in civil engineering from the Technical University of Berlin in 1935.
* In the 1930s and 1940s, he built a series of computers using mechanical relays and electromechanical switches, including the Z3, which was completed in 1941 and is considered to be the first program-controlled computer.
* He continued to develop and build computers throughout his career, including the Z4, which was completed in 1950 and was the first computer to be sold commercially.

<u>John W. Mauchly and J. Presper Eckert</u> were American engineers who were responsible for the development of the Electronic Numerical Integrator And Computer (ENIAC), which was the first electronic digital computer. Some key points about Mauchly and Eckert include:

* Mauchly and Eckert were both professors at the University of Pennsylvania, and they began working on the development of the ENIAC in the early 1940s.
* The ENIAC was completed in 1945 and was used for a wide range of scientific and military applications.
* Mauchly and Eckert formed the company Eckert-Mauchly Computer Corporation (EMCC) in 1946 to develop and sell computers based on the ENIAC design. EMCC was later acquired by Remington Rand, which became the first computer manufacturer in the world.

#### Harvard Architecture 

* The Harvard architecture separates the memory and storage systems for instructions and data, allowing them to be accessed simultaneously and independently.
* It was first implemented in the Harvard Mark I computer, which was built at Harvard University in the 1940s.
* The Harvard architecture can be more efficient for certain types of tasks, such as real-time applications, where fast access to both instructions and data is critical.
* It can be more complex and more expensive to implement than the Von Neumann architecture, which is the more common architecture used in modern computers.
* It can be less flexible than the Von Neumann architecture, as it requires the use of separate memory spaces for instructions and data, which can limit the ways in which the computer can be used.