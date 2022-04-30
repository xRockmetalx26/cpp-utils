# script for search files
R_WILDCARD      =  $(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call R_WILDCARD,$d/,$2))

SRC_PATH        := src/
RC_PATH         := res/
OBJ_PATH        := obj/
INCLUDE_PATHS   := -Iinclude 

C_FILES         := $(call R_WILDCARD,$(SRC_PATH),*.c)
CPP_FILES       := $(call R_WILDCARD,$(SRC_PATH),*.cpp)
RC_FILES        := $(wildcard $(RC_PATH)*.rc)

OBJ_FILES       := $(C_FILES:.c=.o) $(CPP_FILES:.cpp=.o) $(RC_FILES:.rc=.o)
OBJ_FILES       := $(addprefix $(OBJ_PATH),$(OBJ_FILES))

LIB_FILES       := $(wildcard lib/*.dll.a) $(wildcard lib/*.a)

C_FLAGS         := -std=c18 -pedantic -Wextra -Wall -O3 -DNDEBUG
CPP_FLAGS       := -std=c++2b -pedantic -Wextra -Wall -O3 -DNDEBUG

APP             := test

.PHONY: build clean

build: $(APP)

$(OBJ_PATH)%.o: %.c
	@ if not exist $(dir $@) mkdir $(subst /,\,$(dir $@))
	gcc -c $^ -o $@ $(INCLUDE_PATHS) $(C_FLAGS)

$(OBJ_PATH)%.o: %.cpp
	@ if not exist $(dir $@) mkdir $(subst /,\,$(dir $@))
	g++ -c $^ -o $@ $(INCLUDE_PATHS) $(CPP_FLAGS)

$(OBJ_PATH)%.o: %.rc
	@ if not exist $(dir $@) mkdir $(subst /,\,$(dir $@))
	windres $^ -o $@ $(INCLUDE_PATHS)

$(APP): $(OBJ_FILES)
	g++ $^ -o $@ $(LIB_FILES)
	$(APP)

clean:
	@ if exist $(OBJ_PATH) rmdir /s /q $(subst /,\,$(OBJ_PATH)) 2>nul
	@ if exist $(APP) del $(APP).exe 2>nul
	$(info OK clean)
