//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol WXCSyncDataProtocol;

@interface WXCSyncDataMgr : NSObject
{
    id <WXCSyncDataProtocol> _delegate;
    int _syncType;
}

- (void)handleSyncFail:(id)arg1;
- (void)handleRespSyncDataFromServer:(id)arg1;
- (void)reqSyncDataToServer:(int)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 syncType:(int)arg2;

@end
