//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADStreamHandle.h"

@interface XADByteStreamHandle : XADStreamHandle
{
    CDUnknownFunctionPointerType bytestreamproducebyte_ptr;
    int bytesproduced;
    int eofenv[48];
}

- (void)endByteStream;
- (unsigned char)produceByteAtOffset:(long long)arg1;
- (void)resetByteStream;
- (void)resetStream;
- (int)streamAtMost:(int)arg1 toBuffer:(void *)arg2;
- (id)initAsCopyOf:(id)arg1;
- (id)initWithHandle:(id)arg1 length:(long long)arg2 bufferSize:(int)arg3;
- (id)initWithName:(id)arg1 length:(long long)arg2;

@end
