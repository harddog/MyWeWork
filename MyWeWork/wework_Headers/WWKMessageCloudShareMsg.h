//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageMedia.h"

@class NSString, WEWCloudObjectEntry;

@interface WWKMessageCloudShareMsg : WWKMessageMedia
{
    NSString *_title;
    WEWCloudObjectEntry *_feedEntry;
}

+ (_Bool)supportsMergeForwarding;
+ (_Bool)supportsForwarding;
@property(retain, nonatomic) WEWCloudObjectEntry *feedEntry; // @synthesize feedEntry=_feedEntry;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)htmlRepresentation;

@end
