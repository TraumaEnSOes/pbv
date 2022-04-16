ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
INCLUDE = $(ROOT)include
PBV = $(INCLUDE)/pbv
PROTOS = $(INCLUDE)/protos

CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic -g -ggdb -Og
CPPFLAGS = -isystem $(ROOT)include

HEADERS = $(PBV)/BasicRule.hpp $(PBV)/Dependency.hpp $(PBV)/IterableMember.hpp $(PBV)/TracesStore.hpp $(PBV)/ValidationResult.hpp $(PBV)/Validator.hpp
OBJECTS = Dependency.o

poc: poc.cpp $(HEADERS) libvengine.a Basic.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $< libvengine.a Basic.o -lprotobuf-lite -lprotobuf

libvengine.a: $(OBJECTS)
	$(AR) -cq libvengine.a $(OBJECTS)

Basic.o: $(PROTOS)/Basic.pb.cc $(PROTOS)/Basic.pb.h
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f *.o
	rm -f *.a
	rm -f poc
