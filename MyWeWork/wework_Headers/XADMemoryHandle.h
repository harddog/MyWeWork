//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADHandle.h"

@class NSData;

@interface XADMemoryHandle : XADHandle
{
    NSData *backingdata;
    long long memorypos;
}

+ (id)memoryHandleForWriting;
+ (id)memoryHandleForReadingMappedFile:(id)arg1;
+ (id)memoryHandleForReadingBuffer:(const void *)arg1 length:(unsigned int)arg2;
+ (id)memoryHandleForReadingData:(id)arg1;
- (id)copyDataOfLengthAtMost:(int)arg1;
- (id)copyDataOfLength:(int)arg1;
- (id)readDataOfLengthAtMost:(int)arg1;
- (id)readDataOfLength:(int)arg1;
- (id)remainingFileContents;
- (id)fileContents;
- (void)writeBytes:(int)arg1 fromBuffer:(const void *)arg2;
- (int)readAtMost:(int)arg1 toBuffer:(void *)arg2;
- (void)seekToEndOfFile;
- (void)seekToFileOffset:(long long)arg1;
- (_Bool)atEndOfFile;
- (long long)offsetInFile;
- (long long)fileSize;
- (id)mutableData;
- (id)data;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1;
- (id)initWithData:(id)arg1;

@end
