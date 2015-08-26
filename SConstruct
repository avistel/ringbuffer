import os, sys

env = Environment(ENV = os.environ)

#CC_PREFIX = 'arm-none-eabi-'
CC_PREFIX = ''
env['AR'] = CC_PREFIX + 'ar'
env['AS'] = CC_PREFIX + 'as'
env['CC'] = CC_PREFIX + 'gcc'
env['CXX'] = CC_PREFIX + 'g++'
env['LINK'] = CC_PREFIX + 'gcc'
env['RANLIB'] = CC_PREFIX + 'ranlib'
env['OBJCOPY'] = CC_PREFIX + 'objcopy'
env['tools'] = ['gcc']

 
# include locations
env.Append(CPPPATH= [
    'include'
    ])
 
# compiler flags
env.Append(CCFLAGS = [
    '-Wall',
    '-O2',
    '-std=gnu11'
    ])
 
# linker flags
env.Append(LINKFLAGS = [
    ]) 
 
# defines
env.Append(CPPDEFINES = [
    ''
])

# build everything
obj = env.Object(['main.c','ringbuffer.c'])
env.Program(obj)