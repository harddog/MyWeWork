//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FSCalendar, NSCalendar, NSDate, NSMutableDictionary;

@interface FSCalendarCalculator : NSObject
{
    FSCalendar *_calendar;
    long long _numberOfMonths;
    NSMutableDictionary *_months;
    NSMutableDictionary *_monthHeads;
    long long _numberOfWeeks;
    NSMutableDictionary *_weeks;
    NSMutableDictionary *_rowCounts;
}

@property(retain, nonatomic) NSMutableDictionary *rowCounts; // @synthesize rowCounts=_rowCounts;
@property(retain, nonatomic) NSMutableDictionary *weeks; // @synthesize weeks=_weeks;
@property(nonatomic) long long numberOfWeeks; // @synthesize numberOfWeeks=_numberOfWeeks;
@property(retain, nonatomic) NSMutableDictionary *monthHeads; // @synthesize monthHeads=_monthHeads;
@property(retain, nonatomic) NSMutableDictionary *months; // @synthesize months=_months;
@property(nonatomic) long long numberOfMonths; // @synthesize numberOfMonths=_numberOfMonths;
@property(nonatomic) __weak FSCalendar *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (void)didReceiveNotifications:(id)arg1;
- (void)clearCaches;
- (void)reloadSections;
- (struct FSCalendarCoordinate)coordinateForIndexPath:(id)arg1;
- (unsigned long long)monthPositionForIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfRowsInMonth:(id)arg1;
- (long long)numberOfHeadPlaceholdersForMonth:(id)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (id)weekForSection:(long long)arg1;
- (id)monthHeadForSection:(long long)arg1;
- (id)monthForSection:(long long)arg1;
- (id)pageForSection:(long long)arg1;
- (id)indexPathForDate:(id)arg1 atMonthPosition:(unsigned long long)arg2;
- (id)indexPathForDate:(id)arg1 atMonthPosition:(unsigned long long)arg2 scope:(unsigned long long)arg3;
- (id)indexPathForDate:(id)arg1 scope:(unsigned long long)arg2;
- (id)indexPathForDate:(id)arg1;
- (id)dateForIndexPath:(id)arg1;
- (id)dateForIndexPath:(id)arg1 scope:(unsigned long long)arg2;
- (id)safeDateForDate:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithCalendar:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSCalendar *gregorian; // @dynamic gregorian;
@property(readonly, nonatomic) NSDate *maximumDate; // @dynamic maximumDate;
@property(readonly, nonatomic) NSDate *minimumDate; // @dynamic minimumDate;

@end
