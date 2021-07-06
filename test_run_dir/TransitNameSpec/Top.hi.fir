circuit Top :
  module MyModule :
    output io : { }

    skip

  module Top :

    inst MyModule of MyModule @[TransitNameSpec.scala 24:21]
    inst bar of MyModule @[TransitNameSpec.scala 28:21]
    inst baz_generated of MyModule @[TransitNameSpec.scala 34:21]
