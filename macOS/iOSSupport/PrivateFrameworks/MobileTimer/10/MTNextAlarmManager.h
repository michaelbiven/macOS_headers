//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTAlarmManager, NSSet;
@protocol NAScheduler;

@interface MTNextAlarmManager : NSObject
{
    NSSet *_nextAlarms;
    CDUnknownBlockType _updateHandler;
    id <NAScheduler> _serializer;
    MTAlarmManager *_alarmManager;
}

@property(retain, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSSet *nextAlarms; // @synthesize nextAlarms=_nextAlarms;
- (void).cxx_destruct;
- (void)_handleAlarmsDidChange;
- (void)calculateNextAlarms;
- (id)init;

@end

