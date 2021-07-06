;chisel3.BuildInfo$@527a8665
circuit Top : 
  module MyModule : 
    output io : {}
    
    
  module MyModule_1 : 
    output io : {}
    
    
  module MyModule_2 : 
    output io : {}
    
    
  module Top : 
    
    inst MyModule of MyModule @[TransitNameSpec.scala 24:21]
    inst bar of MyModule_1 @[TransitNameSpec.scala 28:21]
    inst baz_generated of MyModule_2 @[TransitNameSpec.scala 34:21]
    
