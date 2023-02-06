add_library(
        JsonParser
        JsonParser.h
        JsonParser.cpp

        types/Interfaces/IValue.h
        types/Interfaces/IValue.cpp
        types/Enums/ValueType.h
        types/Enums/ValueType.cpp

        types/Classes/NullValue.h
        types/Classes/NullValue.cpp
        types/Classes/BoolValue.h
        types/Classes/BoolValue.cpp
        types/Classes/NumberValue.h
        types/Classes/NumberValue.cpp
        types/Classes/StringValue.h
        types/Classes/StringValue.cpp
        types/Classes/ArrayValue.h
        types/Classes/ArrayValue.cpp
        types/Classes/ObjectValue.h
        types/Classes/ObjectValue.cpp

        exceptions/WrongTypeException.h
        exceptions/WrongTypeException.cpp
)