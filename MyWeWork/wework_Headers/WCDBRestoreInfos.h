//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface WCDBRestoreInfos : NSObject <PBCoding>
{
    NSMutableArray *m_infos;
    unsigned int m_maxSeq;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *m_infos; // @synthesize m_infos;
@property(nonatomic) unsigned int m_maxSeq; // @synthesize m_maxSeq;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)addInfo:(id)arg1 withRootPage:(unsigned int)arg2;
- (id)init;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
