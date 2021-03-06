//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSUserNotificationCenterDelegate-Protocol.h"

@class NSData, NSDictionary, NSMutableString, NSString, NSTimer, ReachabilityCheck;

@interface ProblemReporter : NSObject <NSUserNotificationCenterDelegate>
{
    NSData *_systemProfileMicroReportBinaryPlist;
    NSMutableString *_systemProfileMicroReportText;
    NSTimer *_systemProfileTimer;
    ReachabilityCheck *_networkReachability;
    NSDictionary *_windowControllers;
}

- (BOOL)hasBeenAppleInternalRecently;
- (BOOL)isAppleInternal;
- (id)systemProfileMicroReportText;
- (id)systemProfileMicroReportBinaryPlist;
- (void)_systemProfileTimeOut:(id)arg1;
- (void)_getSystemProfile:(id)arg1;
- (void)_finishedGettingSystemProfileData:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (BOOL)displayWindowForURL:(id)arg1;
- (BOOL)problemAtURLIsRedundant:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)terminateIfNoWindowsOpen:(id)arg1;
- (BOOL)displayUserNotificationForProblemURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

