ARCHS = arm64 arm64e
TARGET := iphone:clang:latest:15.0

include $(THEOS)/makefiles/common.mk

TOOL_NAME = containershim

containershim_FILES = main.m
containershim_CFLAGS = -fobjc-arc
containershim_CODESIGN_FLAGS = -Sentitlements.plist
containershim_INSTALL_PATH = /usr/bin

include $(THEOS_MAKE_PATH)/tool.mk
